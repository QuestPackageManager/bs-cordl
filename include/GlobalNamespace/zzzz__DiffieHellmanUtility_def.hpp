#pragma once
// IWYU pragma private; include "GlobalNamespace/DiffieHellmanUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DiffieHellmanUtility)
namespace BGNet::Core {
class ITaskUtility;
}
namespace GlobalNamespace {
class IDiffieHellmanKeyPair;
}
namespace GlobalNamespace {
class __DiffieHellmanUtility__DiffieHellmanKeyPair;
}
namespace GlobalNamespace {
class __DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0;
}
namespace GlobalNamespace {
class __DiffieHellmanUtility__ElipticalCurveKeyPair;
}
namespace GlobalNamespace {
class __DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0;
}
namespace GlobalNamespace {
struct __DiffieHellmanUtility__KeyType;
}
namespace GlobalNamespace {
class __DiffieHellmanUtility__OperationTimer;
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
struct __DiffieHellmanUtility__KeyType;
}
namespace GlobalNamespace {
class DiffieHellmanUtility;
}
namespace GlobalNamespace {
class __DiffieHellmanUtility__DiffieHellmanKeyPair;
}
namespace GlobalNamespace {
class __DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0;
}
namespace GlobalNamespace {
class __DiffieHellmanUtility__ElipticalCurveKeyPair;
}
namespace GlobalNamespace {
class __DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0;
}
namespace GlobalNamespace {
class __DiffieHellmanUtility__OperationTimer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__DiffieHellmanUtility__KeyType);
MARK_REF_PTR_T(::GlobalNamespace::DiffieHellmanUtility);
MARK_REF_PTR_T(::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair);
MARK_REF_PTR_T(::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0);
MARK_REF_PTR_T(::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair);
MARK_REF_PTR_T(::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0);
MARK_REF_PTR_T(::GlobalNamespace::__DiffieHellmanUtility__OperationTimer);
// Type: ::KeyType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DiffieHellmanUtility::KeyType
struct CORDL_TYPE __DiffieHellmanUtility__KeyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DiffieHellmanUtility__KeyType_Unwrapped
  enum struct ____DiffieHellmanUtility__KeyType_Unwrapped : int32_t {
    __E_DiffieHellman = static_cast<int32_t>(0x0),
    __E_ElipticalCurve = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DiffieHellmanUtility__KeyType_Unwrapped() const noexcept {
    return static_cast<____DiffieHellmanUtility__KeyType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiffieHellmanUtility__KeyType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DiffieHellmanUtility__KeyType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DiffieHellman value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__DiffieHellmanUtility__KeyType const DiffieHellman;

  /// @brief Field ElipticalCurve value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__DiffieHellmanUtility__KeyType const ElipticalCurve;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14674 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DiffieHellmanUtility__KeyType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__KeyType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DiffieHellmanUtility::DiffieHellmanKeyPair::<>c__DisplayClass5_0*
class CORDL_TYPE __DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair* __4__this;

  /// @brief Field clientPublicKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_clientPublicKey, put = __cordl_internal_set_clientPublicKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey;

  static inline ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0* New_ctor();

  /// @brief Method <GetPreMasterSecretAsync>b__0, addr 0x2283220, size 0x6c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> _GetPreMasterSecretAsync_b__0();

  constexpr ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*> const& __cordl_internal_get___4__this() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_clientPublicKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_clientPublicKey();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair* value);

  constexpr void __cordl_internal_set_clientPublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x22831b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0(__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0(__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair* _____4__this;

  /// @brief Field clientPublicKey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___clientPublicKey;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14675 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0, ___clientPublicKey) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DiffieHellmanKeyPair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DiffieHellmanUtility::DiffieHellmanKeyPair*
class CORDL_TYPE __DiffieHellmanUtility__DiffieHellmanKeyPair : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0;

  /// @brief Field _dhBasicAgreement, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dhBasicAgreement, put = __cordl_internal_set__dhBasicAgreement)) ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* _dhBasicAgreement;

  /// @brief Field _publicKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__publicKey, put = __cordl_internal_set__publicKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _publicKey;

  __declspec(property(get = get_publicKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey;

  /// @brief Convert operator to "::GlobalNamespace::IDiffieHellmanKeyPair"
  constexpr operator ::GlobalNamespace::IDiffieHellmanKeyPair*() noexcept;

  /// @brief Method GetPreMasterSecret, addr 0x22831b8, size 0x68, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  /// @brief Method GetPreMasterSecretAsync, addr 0x2283070, size 0x140, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* GetPreMasterSecretAsync(::BGNet::Core::ITaskUtility* taskUtility,
                                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  static inline ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair* New_ctor(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKeyParameters,
                                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  constexpr ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*& __cordl_internal_get__dhBasicAgreement();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*> const& __cordl_internal_get__dhBasicAgreement() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__publicKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__publicKey();

  constexpr void __cordl_internal_set__dhBasicAgreement(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* value);

  constexpr void __cordl_internal_set__publicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x2282ac0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKeyParameters, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  /// @brief Method get_publicKey, addr 0x2283068, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_publicKey();

  /// @brief Convert to "::GlobalNamespace::IDiffieHellmanKeyPair"
  constexpr ::GlobalNamespace::IDiffieHellmanKeyPair* i___GlobalNamespace__IDiffieHellmanKeyPair() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiffieHellmanUtility__DiffieHellmanKeyPair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__DiffieHellmanKeyPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiffieHellmanUtility__DiffieHellmanKeyPair(__DiffieHellmanUtility__DiffieHellmanKeyPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__DiffieHellmanKeyPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiffieHellmanUtility__DiffieHellmanKeyPair(__DiffieHellmanUtility__DiffieHellmanKeyPair const&) = delete;

  /// @brief Field _dhBasicAgreement, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* ____dhBasicAgreement;

  /// @brief Field _publicKey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____publicKey;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14676 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair, ____dhBasicAgreement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair, ____publicKey) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DiffieHellmanUtility::ElipticalCurveKeyPair::<>c__DisplayClass5_0*
class CORDL_TYPE __DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair* __4__this;

  /// @brief Field clientPublicKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_clientPublicKey, put = __cordl_internal_set_clientPublicKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey;

  static inline ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0* New_ctor();

  /// @brief Method <GetPreMasterSecretAsync>b__0, addr 0x2283444, size 0x6c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> _GetPreMasterSecretAsync_b__0();

  constexpr ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*> const& __cordl_internal_get___4__this() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_clientPublicKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_clientPublicKey();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair* value);

  constexpr void __cordl_internal_set_clientPublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x22833d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0(__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0(__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair* _____4__this;

  /// @brief Field clientPublicKey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___clientPublicKey;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14677 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0, ___clientPublicKey) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ElipticalCurveKeyPair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DiffieHellmanUtility::ElipticalCurveKeyPair*
class CORDL_TYPE __DiffieHellmanUtility__ElipticalCurveKeyPair : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0;

  /// @brief Field _ecdhBasicAgreement, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ecdhBasicAgreement, put = __cordl_internal_set__ecdhBasicAgreement)) ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* _ecdhBasicAgreement;

  /// @brief Field _publicKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__publicKey, put = __cordl_internal_set__publicKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _publicKey;

  __declspec(property(get = get_publicKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey;

  /// @brief Convert operator to "::GlobalNamespace::IDiffieHellmanKeyPair"
  constexpr operator ::GlobalNamespace::IDiffieHellmanKeyPair*() noexcept;

  /// @brief Method GetPreMasterSecret, addr 0x22833dc, size 0x68, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  /// @brief Method GetPreMasterSecretAsync, addr 0x2283294, size 0x140, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* GetPreMasterSecretAsync(::BGNet::Core::ITaskUtility* taskUtility,
                                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  static inline ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair* New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privateKeyParameters,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  constexpr ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*& __cordl_internal_get__ecdhBasicAgreement();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*> const& __cordl_internal_get__ecdhBasicAgreement() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__publicKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__publicKey();

  constexpr void __cordl_internal_set__ecdhBasicAgreement(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* value);

  constexpr void __cordl_internal_set__publicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x2282b54, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privateKeyParameters, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  /// @brief Method get_publicKey, addr 0x228328c, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_publicKey();

  /// @brief Convert to "::GlobalNamespace::IDiffieHellmanKeyPair"
  constexpr ::GlobalNamespace::IDiffieHellmanKeyPair* i___GlobalNamespace__IDiffieHellmanKeyPair() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiffieHellmanUtility__ElipticalCurveKeyPair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__ElipticalCurveKeyPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiffieHellmanUtility__ElipticalCurveKeyPair(__DiffieHellmanUtility__ElipticalCurveKeyPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__ElipticalCurveKeyPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiffieHellmanUtility__ElipticalCurveKeyPair(__DiffieHellmanUtility__ElipticalCurveKeyPair const&) = delete;

  /// @brief Field _ecdhBasicAgreement, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* ____ecdhBasicAgreement;

  /// @brief Field _publicKey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____publicKey;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14678 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair, ____ecdhBasicAgreement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair, ____publicKey) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OperationTimer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DiffieHellmanUtility::OperationTimer*
class CORDL_TYPE __DiffieHellmanUtility__OperationTimer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _operationName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__operationName, put = __cordl_internal_set__operationName)) ::StringW _operationName;

  /// @brief Field _stopwatch, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__stopwatch, put = __cordl_internal_set__stopwatch)) ::System::Diagnostics::Stopwatch* _stopwatch;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2283534, size 0xe8, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::__DiffieHellmanUtility__OperationTimer* New_ctor(::StringW operationName);

  /// @brief Method Time, addr 0x2282ab8, size 0x8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__DiffieHellmanUtility__OperationTimer* Time(::StringW operation);

  constexpr ::StringW const& __cordl_internal_get__operationName() const;

  constexpr ::StringW& __cordl_internal_get__operationName();

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__stopwatch();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& __cordl_internal_get__stopwatch() const;

  constexpr void __cordl_internal_set__operationName(::StringW value);

  constexpr void __cordl_internal_set__stopwatch(::System::Diagnostics::Stopwatch* value);

  /// @brief Method .ctor, addr 0x22834b0, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::StringW operationName);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiffieHellmanUtility__OperationTimer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__OperationTimer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiffieHellmanUtility__OperationTimer(__DiffieHellmanUtility__OperationTimer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__OperationTimer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiffieHellmanUtility__OperationTimer(__DiffieHellmanUtility__OperationTimer const&) = delete;

  /// @brief Field _stopwatch, offset: 0x10, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ____stopwatch;

  /// @brief Field _operationName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____operationName;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14679 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DiffieHellmanUtility__OperationTimer, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__OperationTimer, ____stopwatch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__OperationTimer, ____operationName) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DiffieHellmanUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DiffieHellmanUtility*
class CORDL_TYPE DiffieHellmanUtility : public ::System::Object {
public:
  // Declarations
  using DiffieHellmanKeyPair = ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair;

  using ElipticalCurveKeyPair = ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair;

  using KeyType = ::GlobalNamespace::__DiffieHellmanUtility__KeyType;

  using OperationTimer = ::GlobalNamespace::__DiffieHellmanUtility__OperationTimer;

  /// @brief Field _dhParameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__dhParameters, put = setStaticF__dhParameters)) ::Org::BouncyCastle::Crypto::Parameters::DHParameters* _dhParameters;

  /// @brief Field _ecParameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__ecParameters, put = setStaticF__ecParameters)) ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* _ecParameters;

  /// @brief Field _ecPointFormats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__ecPointFormats, put = setStaticF__ecPointFormats)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _ecPointFormats;

  /// @brief Field _secureRandom, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__secureRandom, put = setStaticF__secureRandom)) ::Org::BouncyCastle::Security::SecureRandom* _secureRandom;

  /// @brief Method GenerateDiffieHellmanKeys, addr 0x2282940, size 0x178, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair* GenerateDiffieHellmanKeys();

  /// @brief Method GenerateElipticalCurveKeys, addr 0x22827bc, size 0x184, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair* GenerateElipticalCurveKeys();

  /// @brief Method GenerateKeys, addr 0x227eb7c, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IDiffieHellmanKeyPair* GenerateKeys(::GlobalNamespace::__DiffieHellmanUtility__KeyType keyType);

  /// @brief Method GenerateKeysAsync, addr 0x2282630, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IDiffieHellmanKeyPair*>*
  GenerateKeysAsync(::BGNet::Core::ITaskUtility* taskUtility, ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::__DiffieHellmanUtility__KeyType keyType);

  /// @brief Method GetPreMasterSecret, addr 0x2282be8, size 0x184, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreMasterSecret(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* dhBasicAgreement,
                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  /// @brief Method GetPreMasterSecret, addr 0x2282d6c, size 0x1c4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14680 };

  /// @brief Field kMaxDiffieHellmanPublicKeyLength offset 0xffffffff size 0x4
  static constexpr int32_t kMaxDiffieHellmanPublicKeyLength{ static_cast<int32_t>(0x800) };

  /// @brief Field kMaxElipticalCurvePublicKeyLength offset 0xffffffff size 0x4
  static constexpr int32_t kMaxElipticalCurvePublicKeyLength{ static_cast<int32_t>(0x100) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DiffieHellmanUtility, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DiffieHellmanUtility__KeyType, "", "DiffieHellmanUtility/KeyType");
NEED_NO_BOX(::GlobalNamespace::DiffieHellmanUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DiffieHellmanUtility*, "", "DiffieHellmanUtility");
NEED_NO_BOX(::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*, "", "DiffieHellmanUtility/DiffieHellmanKeyPair");
NEED_NO_BOX(::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0*, "", "DiffieHellmanUtility/DiffieHellmanKeyPair/<>c__DisplayClass5_0");
NEED_NO_BOX(::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*, "", "DiffieHellmanUtility/ElipticalCurveKeyPair");
NEED_NO_BOX(::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0*, "", "DiffieHellmanUtility/ElipticalCurveKeyPair/<>c__DisplayClass5_0");
NEED_NO_BOX(::GlobalNamespace::__DiffieHellmanUtility__OperationTimer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DiffieHellmanUtility__OperationTimer*, "", "DiffieHellmanUtility/OperationTimer");
