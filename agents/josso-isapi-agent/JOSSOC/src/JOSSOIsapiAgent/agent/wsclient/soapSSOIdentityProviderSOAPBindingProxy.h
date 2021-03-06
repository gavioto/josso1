/* soapSSOIdentityProviderSOAPBindingProxy.h
   Generated by gSOAP 2.7.14 from josso-1.2.h
   Copyright(C) 2000-2009, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapSSOIdentityProviderSOAPBindingProxy_H
#define soapSSOIdentityProviderSOAPBindingProxy_H
#include "soapH.h"

class SOAP_CMAC SSOIdentityProviderSOAPBindingProxy : public soap
{ public:
	/// Endpoint URL of service 'SSOIdentityProviderSOAPBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Constructor
	SSOIdentityProviderSOAPBindingProxy();
	/// Constructor with copy of another engine state
	SSOIdentityProviderSOAPBindingProxy(const struct soap&);
	/// Constructor with engine input+output mode control
	SSOIdentityProviderSOAPBindingProxy(soap_mode iomode);
	/// Constructor with engine input and output mode control
	SSOIdentityProviderSOAPBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~SSOIdentityProviderSOAPBindingProxy();
	/// Initializer used by constructor
	virtual	void SSOIdentityProviderSOAPBindingProxy_init(soap_mode imode, soap_mode omode);
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Force close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
	virtual	void soap_stream_fault(std::ostream&);
	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'resolveAuthenticationAssertion' (returns error code or SOAP_OK)
	virtual	int resolveAuthenticationAssertion(ns3__ResolveAuthenticationAssertionRequestType *ns3__ResolveAuthenticationAssertionRequest, ns3__ResolveAuthenticationAssertionResponseType *ns3__ResolveAuthenticationAssertionResponse);

	/// Web service operation 'assertIdentityWithSimpleAuthentication' (returns error code or SOAP_OK)
	virtual	int assertIdentityWithSimpleAuthentication(ns3__AssertIdentityWithSimpleAuthenticationRequestType *ns3__AssertIdentityWithSimpleAuthenticationRequest, ns3__AssertIdentityWithSimpleAuthenticationResponseType *ns3__AssertIdentityWithSimpleAuthenticationResponse);

	/// Web service operation 'globalSignoff' (returns error code or SOAP_OK)
	virtual	int globalSignoff(ns3__GlobalSignoffRequestType *ns3__GlobalSignoffRequest, ns3__GlobalSignoffResponseType *ns3__GlobalSignoffResponse);
};
#endif
