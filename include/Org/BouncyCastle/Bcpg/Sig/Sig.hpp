#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Org/BouncyCastle/Bcpg/Sig/EmbeddedSignature.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/Exportable.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/Features.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/IssuerKeyId.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/KeyExpirationTime.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/KeyFlags.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/NotationData.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/PreferredAlgorithms.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/PrimaryUserId.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/Revocable.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/SignatureCreationTime.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/SignatureExpirationTime.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/SignerUserId.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/TrustSignature.hpp"
#ifdef __cpp_modules
export module Sig;
#endif
