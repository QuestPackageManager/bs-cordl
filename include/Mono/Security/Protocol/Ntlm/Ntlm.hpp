#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Mono/Security/Protocol/Ntlm/ChallengeResponse.hpp"
#include "Mono/Security/Protocol/Ntlm/ChallengeResponse2.hpp"
#include "Mono/Security/Protocol/Ntlm/MessageBase.hpp"
#include "Mono/Security/Protocol/Ntlm/NtlmAuthLevel.hpp"
#include "Mono/Security/Protocol/Ntlm/NtlmFlags.hpp"
#include "Mono/Security/Protocol/Ntlm/NtlmSettings.hpp"
#include "Mono/Security/Protocol/Ntlm/Type1Message.hpp"
#include "Mono/Security/Protocol/Ntlm/Type2Message.hpp"
#include "Mono/Security/Protocol/Ntlm/Type3Message.hpp"
#ifdef __cpp_modules
export module Ntlm;
#endif
