#pragma once
// IWYU pragma private; include "GlobalNamespace/DiffieHellmanUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DiffieHellmanUtility)
namespace BGNet::Core {
class ITaskUtility;
}
namespace GlobalNamespace {
class DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0;
}
namespace GlobalNamespace {
class DiffieHellmanUtility_DiffieHellmanKeyPair;
}
namespace GlobalNamespace {
class DiffieHellmanUtility_ElipticalCurveKeyPair;
}
namespace GlobalNamespace {
struct DiffieHellmanUtility_KeyType;
}
namespace GlobalNamespace {
class DiffieHellmanUtility_OperationTimer;
}
namespace GlobalNamespace {
class ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0;
}
namespace GlobalNamespace {
class IDiffieHellmanKeyPair;
}
namespace Org::BouncyCastle::Crypto::Agreement {
class DHBasicAgreement;
}
namespace Org::BouncyCastle::Crypto::Agreement {
class ECDHBasicAgreement;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct DiffieHellmanUtility_KeyType;
}
namespace GlobalNamespace {
class DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0;
}
namespace GlobalNamespace {
class DiffieHellmanUtility;
}
namespace GlobalNamespace {
class DiffieHellmanUtility_DiffieHellmanKeyPair;
}
namespace GlobalNamespace {
class DiffieHellmanUtility_ElipticalCurveKeyPair;
}
namespace GlobalNamespace {
class DiffieHellmanUtility_OperationTimer;
}
namespace GlobalNamespace {
class ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DiffieHellmanUtility_KeyType);
MARK_REF_PTR_T(::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0);
MARK_REF_PTR_T(::GlobalNamespace::DiffieHellmanUtility);
MARK_REF_PTR_T(::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair);
MARK_REF_PTR_T(::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair);
MARK_REF_PTR_T(::GlobalNamespace::DiffieHellmanUtility_OperationTimer);
MARK_REF_PTR_T(::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: DiffieHellmanUtility/KeyType
struct CORDL_TYPE DiffieHellmanUtility_KeyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DiffieHellmanUtility_KeyType_Unwrapped
  enum struct __DiffieHellmanUtility_KeyType_Unwrapped : int32_t {
    __E_DiffieHellman = static_cast<int32_t>(0x0),
    __E_ElipticalCurve = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DiffieHellmanUtility_KeyType_Unwrapped() const noexcept {
    return static_cast<__DiffieHellmanUtility_KeyType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DiffieHellmanUtility_KeyType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DiffieHellmanUtility_KeyType(int32_t value__) noexcept;

  /// @brief Field DiffieHellman value: I32(0)
  static ::GlobalNamespace::DiffieHellmanUtility_KeyType const DiffieHellman;

  /// @brief Field ElipticalCurve value: I32(1)
  static ::GlobalNamespace::DiffieHellmanUtility_KeyType const ElipticalCurve;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18094 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DiffieHellmanUtility_KeyType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DiffieHellmanUtility_KeyType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DiffieHellmanUtility/DiffieHellmanKeyPair/<>c__DisplayClass5_0
class CORDL_TYPE DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair* __4__this;

  /// @brief Field clientPublicKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_clientPublicKey, put = __cordl_internal_set_clientPublicKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey;

  static inline ::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0* New_ctor();

  /// @brief Method <GetPreMasterSecretAsync>b__0, addr 0x320a350, size 0x70, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> _GetPreMasterSecretAsync_b__0();

  constexpr ::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair*& __cordl_internal_get___4__this();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_clientPublicKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_clientPublicKey();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair* value);

  constexpr void __cordl_internal_set_clientPublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x320a2e0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0(DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0(DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18095 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair* _____4__this;

  /// @brief Field clientPublicKey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___clientPublicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0, ___clientPublicKey) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DiffieHellmanUtility/DiffieHellmanKeyPair
class CORDL_TYPE DiffieHellmanUtility_DiffieHellmanKeyPair : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0;

  /// @brief Field _dhBasicAgreement, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dhBasicAgreement, put = __cordl_internal_set__dhBasicAgreement)) ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* _dhBasicAgreement;

  /// @brief Field _publicKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__publicKey, put = __cordl_internal_set__publicKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _publicKey;

  __declspec(property(get = get_publicKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey;

  /// @brief Convert operator to "::GlobalNamespace::IDiffieHellmanKeyPair"
  constexpr operator ::GlobalNamespace::IDiffieHellmanKeyPair*() noexcept;

  /// @brief Method GetPreMasterSecret, addr 0x320a2e4, size 0x6c, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  /// @brief Method GetPreMasterSecretAsync, addr 0x320a160, size 0x180, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* GetPreMasterSecretAsync(::BGNet::Core::ITaskUtility* taskUtility,
                                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  static inline ::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair* New_ctor(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKeyParameters,
                                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  constexpr ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* const& __cordl_internal_get__dhBasicAgreement() const;

  constexpr ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*& __cordl_internal_get__dhBasicAgreement();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__publicKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__publicKey();

  constexpr void __cordl_internal_set__dhBasicAgreement(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* value);

  constexpr void __cordl_internal_set__publicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3209a50, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKeyParameters, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  /// @brief Method get_publicKey, addr 0x320a158, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_publicKey();

  /// @brief Convert to "::GlobalNamespace::IDiffieHellmanKeyPair"
  constexpr ::GlobalNamespace::IDiffieHellmanKeyPair* i___GlobalNamespace__IDiffieHellmanKeyPair() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiffieHellmanUtility_DiffieHellmanKeyPair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiffieHellmanUtility_DiffieHellmanKeyPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiffieHellmanUtility_DiffieHellmanKeyPair(DiffieHellmanUtility_DiffieHellmanKeyPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiffieHellmanUtility_DiffieHellmanKeyPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiffieHellmanUtility_DiffieHellmanKeyPair(DiffieHellmanUtility_DiffieHellmanKeyPair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18096 };

  /// @brief Field _dhBasicAgreement, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* ____dhBasicAgreement;

  /// @brief Field _publicKey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____publicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair, ____dhBasicAgreement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair, ____publicKey) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DiffieHellmanUtility/ElipticalCurveKeyPair/<>c__DisplayClass5_0
class CORDL_TYPE ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair* __4__this;

  /// @brief Field clientPublicKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_clientPublicKey, put = __cordl_internal_set_clientPublicKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey;

  static inline ::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0* New_ctor();

  /// @brief Method <GetPreMasterSecretAsync>b__0, addr 0x320a5b8, size 0x70, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> _GetPreMasterSecretAsync_b__0();

  constexpr ::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair*& __cordl_internal_get___4__this();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_clientPublicKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_clientPublicKey();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair* value);

  constexpr void __cordl_internal_set_clientPublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x320a548, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0(ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0(ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18097 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair* _____4__this;

  /// @brief Field clientPublicKey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___clientPublicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0, ___clientPublicKey) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DiffieHellmanUtility/ElipticalCurveKeyPair
class CORDL_TYPE DiffieHellmanUtility_ElipticalCurveKeyPair : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0;

  /// @brief Field _ecdhBasicAgreement, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ecdhBasicAgreement, put = __cordl_internal_set__ecdhBasicAgreement)) ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* _ecdhBasicAgreement;

  /// @brief Field _publicKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__publicKey, put = __cordl_internal_set__publicKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _publicKey;

  __declspec(property(get = get_publicKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey;

  /// @brief Convert operator to "::GlobalNamespace::IDiffieHellmanKeyPair"
  constexpr operator ::GlobalNamespace::IDiffieHellmanKeyPair*() noexcept;

  /// @brief Method GetPreMasterSecret, addr 0x320a54c, size 0x6c, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  /// @brief Method GetPreMasterSecretAsync, addr 0x320a3c8, size 0x180, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* GetPreMasterSecretAsync(::BGNet::Core::ITaskUtility* taskUtility,
                                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  static inline ::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair* New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privateKeyParameters,
                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  constexpr ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* const& __cordl_internal_get__ecdhBasicAgreement() const;

  constexpr ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*& __cordl_internal_get__ecdhBasicAgreement();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__publicKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__publicKey();

  constexpr void __cordl_internal_set__ecdhBasicAgreement(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* value);

  constexpr void __cordl_internal_set__publicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3209acc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privateKeyParameters, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  /// @brief Method get_publicKey, addr 0x320a3c0, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_publicKey();

  /// @brief Convert to "::GlobalNamespace::IDiffieHellmanKeyPair"
  constexpr ::GlobalNamespace::IDiffieHellmanKeyPair* i___GlobalNamespace__IDiffieHellmanKeyPair() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiffieHellmanUtility_ElipticalCurveKeyPair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiffieHellmanUtility_ElipticalCurveKeyPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiffieHellmanUtility_ElipticalCurveKeyPair(DiffieHellmanUtility_ElipticalCurveKeyPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiffieHellmanUtility_ElipticalCurveKeyPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiffieHellmanUtility_ElipticalCurveKeyPair(DiffieHellmanUtility_ElipticalCurveKeyPair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18098 };

  /// @brief Field _ecdhBasicAgreement, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* ____ecdhBasicAgreement;

  /// @brief Field _publicKey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____publicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair, ____ecdhBasicAgreement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair, ____publicKey) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DiffieHellmanUtility/OperationTimer
class CORDL_TYPE DiffieHellmanUtility_OperationTimer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _operationName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__operationName, put = __cordl_internal_set__operationName)) ::StringW _operationName;

  /// @brief Field _stopwatch, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__stopwatch, put = __cordl_internal_set__stopwatch)) ::System::Diagnostics::Stopwatch* _stopwatch;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x320a694, size 0x100, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::DiffieHellmanUtility_OperationTimer* New_ctor(::StringW operationName);

  /// @brief Method Time, addr 0x3209a48, size 0x8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::DiffieHellmanUtility_OperationTimer* Time(::StringW operation);

  constexpr ::StringW const& __cordl_internal_get__operationName() const;

  constexpr ::StringW& __cordl_internal_get__operationName();

  constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__stopwatch() const;

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__stopwatch();

  constexpr void __cordl_internal_set__operationName(::StringW value);

  constexpr void __cordl_internal_set__stopwatch(::System::Diagnostics::Stopwatch* value);

  /// @brief Method .ctor, addr 0x320a628, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW operationName);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiffieHellmanUtility_OperationTimer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiffieHellmanUtility_OperationTimer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiffieHellmanUtility_OperationTimer(DiffieHellmanUtility_OperationTimer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiffieHellmanUtility_OperationTimer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiffieHellmanUtility_OperationTimer(DiffieHellmanUtility_OperationTimer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18099 };

  /// @brief Field _stopwatch, offset: 0x10, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ____stopwatch;

  /// @brief Field _operationName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____operationName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DiffieHellmanUtility_OperationTimer, ____stopwatch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiffieHellmanUtility_OperationTimer, ____operationName) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DiffieHellmanUtility_OperationTimer, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DiffieHellmanUtility
class CORDL_TYPE DiffieHellmanUtility : public ::System::Object {
public:
  // Declarations
  using DiffieHellmanKeyPair = ::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair;

  using ElipticalCurveKeyPair = ::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair;

  using KeyType = ::GlobalNamespace::DiffieHellmanUtility_KeyType;

  using OperationTimer = ::GlobalNamespace::DiffieHellmanUtility_OperationTimer;

  /// @brief Field _dhParameters, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__dhParameters, put = setStaticF__dhParameters)) ::Org::BouncyCastle::Crypto::Parameters::DHParameters* _dhParameters;

  /// @brief Field _ecParameters, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__ecParameters, put = setStaticF__ecParameters)) ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* _ecParameters;

  /// @brief Field _ecPointFormats, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__ecPointFormats, put = setStaticF__ecPointFormats)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _ecPointFormats;

  /// @brief Field _secureRandom, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__secureRandom, put = setStaticF__secureRandom)) ::Org::BouncyCastle::Security::SecureRandom* _secureRandom;

  /// @brief Method GenerateDiffieHellmanKeys, addr 0x320981c, size 0x22c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair* GenerateDiffieHellmanKeys();

  /// @brief Method GenerateElipticalCurveKeys, addr 0x32095e0, size 0x23c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair* GenerateElipticalCurveKeys();

  /// @brief Method GenerateKeys, addr 0x3205e0c, size 0x70, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IDiffieHellmanKeyPair* GenerateKeys(::GlobalNamespace::DiffieHellmanUtility_KeyType keyType);

  /// @brief Method GenerateKeysAsync, addr 0x3209448, size 0x198, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IDiffieHellmanKeyPair*>*
  GenerateKeysAsync(::BGNet::Core::ITaskUtility* taskUtility, ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::DiffieHellmanUtility_KeyType keyType);

  /// @brief Method GetPreMasterSecret, addr 0x3209b48, size 0x254, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreMasterSecret(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* dhBasicAgreement,
                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  /// @brief Method GetPreMasterSecret, addr 0x3209d9c, size 0x274, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreMasterSecret(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* ecdhBasicAgreement,
                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF__dhParameters();

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* getStaticF__ecParameters();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF__ecPointFormats();

  static inline ::Org::BouncyCastle::Security::SecureRandom* getStaticF__secureRandom();

  static inline void setStaticF__dhParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline void setStaticF__ecParameters(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* value);

  static inline void setStaticF__ecPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF__secureRandom(::Org::BouncyCastle::Security::SecureRandom* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiffieHellmanUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiffieHellmanUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiffieHellmanUtility(DiffieHellmanUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiffieHellmanUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiffieHellmanUtility(DiffieHellmanUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18100 };

  /// @brief Field kMaxDiffieHellmanPublicKeyLength offset 0xffffffff size 0x4
  static constexpr int32_t kMaxDiffieHellmanPublicKeyLength{ static_cast<int32_t>(0x800) };

  /// @brief Field kMaxElipticalCurvePublicKeyLength offset 0xffffffff size 0x4
  static constexpr int32_t kMaxElipticalCurvePublicKeyLength{ static_cast<int32_t>(0x100) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DiffieHellmanUtility, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DiffieHellmanUtility_KeyType, "", "DiffieHellmanUtility/KeyType");
NEED_NO_BOX(::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0*, "", "DiffieHellmanUtility/DiffieHellmanKeyPair/<>c__DisplayClass5_0");
NEED_NO_BOX(::GlobalNamespace::DiffieHellmanUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DiffieHellmanUtility*, "", "DiffieHellmanUtility");
NEED_NO_BOX(::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair*, "", "DiffieHellmanUtility/DiffieHellmanKeyPair");
NEED_NO_BOX(::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair*, "", "DiffieHellmanUtility/ElipticalCurveKeyPair");
NEED_NO_BOX(::GlobalNamespace::DiffieHellmanUtility_OperationTimer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DiffieHellmanUtility_OperationTimer*, "", "DiffieHellmanUtility/OperationTimer");
NEED_NO_BOX(::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0*, "", "DiffieHellmanUtility/ElipticalCurveKeyPair/<>c__DisplayClass5_0");
