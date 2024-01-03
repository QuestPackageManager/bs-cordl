#pragma once
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
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12712))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DiffieHellmanUtility__KeyType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiffieHellmanUtility__KeyType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field DiffieHellman value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__DiffieHellmanUtility__KeyType const DiffieHellman;

  /// @brief Field ElipticalCurve value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__DiffieHellmanUtility__KeyType const ElipticalCurve;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DiffieHellmanUtility__KeyType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__KeyType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12713))
// CS Name: ::DiffieHellmanUtility::DiffieHellmanKeyPair::<>c__DisplayClass5_0*
class CORDL_TYPE __DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair* __4__this;

  /// @brief Field clientPublicKey, offset 0x18, size 0x8
  __declspec(property(get = __get_clientPublicKey, put = __set_clientPublicKey))::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey;

  constexpr ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_clientPublicKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_clientPublicKey() const;

  constexpr void __set_clientPublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0* New_ctor();

  /// @brief Method .ctor, addr 0xe3362c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetPreMasterSecretAsync>b__0, addr 0xe3369c, size 0x6c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> _GetPreMasterSecretAsync_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0(__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0(__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair* _____4__this;

  /// @brief Field clientPublicKey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___clientPublicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0, ___clientPublicKey) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DiffieHellmanKeyPair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12714))
// CS Name: ::DiffieHellmanUtility::DiffieHellmanKeyPair*
class CORDL_TYPE __DiffieHellmanUtility__DiffieHellmanKeyPair : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0;

  /// @brief Field _dhBasicAgreement, offset 0x10, size 0x8
  __declspec(property(get = __get__dhBasicAgreement, put = __set__dhBasicAgreement))::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* _dhBasicAgreement;

  /// @brief Field _publicKey, offset 0x18, size 0x8
  __declspec(property(get = __get__publicKey, put = __set__publicKey))::ArrayW<uint8_t, ::Array<uint8_t>*> _publicKey;

  __declspec(property(get = get_publicKey))::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey;

  /// @brief Convert operator to "::GlobalNamespace::IDiffieHellmanKeyPair"
  constexpr operator ::GlobalNamespace::IDiffieHellmanKeyPair*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IDiffieHellmanKeyPair"
  constexpr ::GlobalNamespace::IDiffieHellmanKeyPair* i___GlobalNamespace__IDiffieHellmanKeyPair() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*& __get__dhBasicAgreement();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*> const& __get__dhBasicAgreement() const;

  constexpr void __set__dhBasicAgreement(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__publicKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__publicKey() const;

  constexpr void __set__publicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_publicKey, addr 0xe334d4, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_publicKey();

  static inline ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair* New_ctor(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKeyParameters,
                                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  /// @brief Method .ctor, addr 0xe32efc, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKeyParameters, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  /// @brief Method GetPreMasterSecretAsync, addr 0xe334dc, size 0x150, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* GetPreMasterSecretAsync(::BGNet::Core::ITaskUtility* taskUtility,
                                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  /// @brief Method GetPreMasterSecret, addr 0xe33634, size 0x68, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__DiffieHellmanKeyPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiffieHellmanUtility__DiffieHellmanKeyPair(__DiffieHellmanUtility__DiffieHellmanKeyPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__DiffieHellmanKeyPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiffieHellmanUtility__DiffieHellmanKeyPair(__DiffieHellmanUtility__DiffieHellmanKeyPair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiffieHellmanUtility__DiffieHellmanKeyPair();

public:
  /// @brief Field _dhBasicAgreement, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* ____dhBasicAgreement;

  /// @brief Field _publicKey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____publicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair, ____dhBasicAgreement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair, ____publicKey) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12715))
// CS Name: ::DiffieHellmanUtility::ElipticalCurveKeyPair::<>c__DisplayClass5_0*
class CORDL_TYPE __DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair* __4__this;

  /// @brief Field clientPublicKey, offset 0x18, size 0x8
  __declspec(property(get = __get_clientPublicKey, put = __set_clientPublicKey))::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey;

  constexpr ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_clientPublicKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_clientPublicKey() const;

  constexpr void __set_clientPublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0* New_ctor();

  /// @brief Method .ctor, addr 0xe33860, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetPreMasterSecretAsync>b__0, addr 0xe338d0, size 0x6c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> _GetPreMasterSecretAsync_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0(__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0(__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair* _____4__this;

  /// @brief Field clientPublicKey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___clientPublicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0, ___clientPublicKey) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ElipticalCurveKeyPair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12716))
// CS Name: ::DiffieHellmanUtility::ElipticalCurveKeyPair*
class CORDL_TYPE __DiffieHellmanUtility__ElipticalCurveKeyPair : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0;

  /// @brief Field _ecdhBasicAgreement, offset 0x10, size 0x8
  __declspec(property(get = __get__ecdhBasicAgreement, put = __set__ecdhBasicAgreement))::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* _ecdhBasicAgreement;

  /// @brief Field _publicKey, offset 0x18, size 0x8
  __declspec(property(get = __get__publicKey, put = __set__publicKey))::ArrayW<uint8_t, ::Array<uint8_t>*> _publicKey;

  __declspec(property(get = get_publicKey))::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey;

  /// @brief Convert operator to "::GlobalNamespace::IDiffieHellmanKeyPair"
  constexpr operator ::GlobalNamespace::IDiffieHellmanKeyPair*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IDiffieHellmanKeyPair"
  constexpr ::GlobalNamespace::IDiffieHellmanKeyPair* i___GlobalNamespace__IDiffieHellmanKeyPair() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*& __get__ecdhBasicAgreement();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*> const& __get__ecdhBasicAgreement() const;

  constexpr void __set__ecdhBasicAgreement(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__publicKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__publicKey() const;

  constexpr void __set__publicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_publicKey, addr 0xe33708, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_publicKey();

  static inline ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair* New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privateKeyParameters,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  /// @brief Method .ctor, addr 0xe32f94, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privateKeyParameters, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  /// @brief Method GetPreMasterSecretAsync, addr 0xe33710, size 0x150, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* GetPreMasterSecretAsync(::BGNet::Core::ITaskUtility* taskUtility,
                                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  /// @brief Method GetPreMasterSecret, addr 0xe33868, size 0x68, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__ElipticalCurveKeyPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiffieHellmanUtility__ElipticalCurveKeyPair(__DiffieHellmanUtility__ElipticalCurveKeyPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__ElipticalCurveKeyPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiffieHellmanUtility__ElipticalCurveKeyPair(__DiffieHellmanUtility__ElipticalCurveKeyPair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiffieHellmanUtility__ElipticalCurveKeyPair();

public:
  /// @brief Field _ecdhBasicAgreement, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* ____ecdhBasicAgreement;

  /// @brief Field _publicKey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____publicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair, ____ecdhBasicAgreement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair, ____publicKey) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OperationTimer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12717))
// CS Name: ::DiffieHellmanUtility::OperationTimer*
class CORDL_TYPE __DiffieHellmanUtility__OperationTimer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _stopwatch, offset 0x10, size 0x8
  __declspec(property(get = __get__stopwatch, put = __set__stopwatch))::System::Diagnostics::Stopwatch* _stopwatch;

  /// @brief Field _operationName, offset 0x18, size 0x8
  __declspec(property(get = __get__operationName, put = __set__operationName))::StringW _operationName;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr ::System::Diagnostics::Stopwatch*& __get__stopwatch();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& __get__stopwatch() const;

  constexpr void __set__stopwatch(::System::Diagnostics::Stopwatch* value);

  constexpr ::StringW& __get__operationName();

  constexpr ::StringW const& __get__operationName() const;

  constexpr void __set__operationName(::StringW value);

  static inline ::GlobalNamespace::__DiffieHellmanUtility__OperationTimer* New_ctor(::StringW operationName);

  /// @brief Method .ctor, addr 0xe3393c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::StringW operationName);

  /// @brief Method Dispose, addr 0xe339c0, size 0xe8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Time, addr 0xe32ef4, size 0x8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__DiffieHellmanUtility__OperationTimer* Time(::StringW operation);

  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__OperationTimer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiffieHellmanUtility__OperationTimer(__DiffieHellmanUtility__OperationTimer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiffieHellmanUtility__OperationTimer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiffieHellmanUtility__OperationTimer(__DiffieHellmanUtility__OperationTimer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiffieHellmanUtility__OperationTimer();

public:
  /// @brief Field _stopwatch, offset: 0x10, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ____stopwatch;

  /// @brief Field _operationName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____operationName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DiffieHellmanUtility__OperationTimer, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__OperationTimer, ____stopwatch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiffieHellmanUtility__OperationTimer, ____operationName) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DiffieHellmanUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12718))
// CS Name: ::DiffieHellmanUtility*
class CORDL_TYPE DiffieHellmanUtility : public ::System::Object {
public:
  // Declarations
  using OperationTimer = ::GlobalNamespace::__DiffieHellmanUtility__OperationTimer;

  using ElipticalCurveKeyPair = ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair;

  using DiffieHellmanKeyPair = ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair;

  using KeyType = ::GlobalNamespace::__DiffieHellmanUtility__KeyType;

  /// @brief Field _secureRandom, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__secureRandom, put = setStaticF__secureRandom))::Org::BouncyCastle::Security::SecureRandom* _secureRandom;

  /// @brief Field _dhParameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__dhParameters, put = setStaticF__dhParameters))::Org::BouncyCastle::Crypto::Parameters::DHParameters* _dhParameters;

  /// @brief Field _ecParameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__ecParameters, put = setStaticF__ecParameters))::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* _ecParameters;

  /// @brief Field _ecPointFormats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__ecPointFormats, put = setStaticF__ecPointFormats))::ArrayW<uint8_t, ::Array<uint8_t>*> _ecPointFormats;

  static inline void setStaticF__secureRandom(::Org::BouncyCastle::Security::SecureRandom* value);

  static inline ::Org::BouncyCastle::Security::SecureRandom* getStaticF__secureRandom();

  static inline void setStaticF__dhParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF__dhParameters();

  static inline void setStaticF__ecParameters(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* getStaticF__ecParameters();

  static inline void setStaticF__ecPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF__ecPointFormats();

  /// @brief Method GenerateKeysAsync, addr 0xe32a4c, size 0x194, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IDiffieHellmanKeyPair*>*
  GenerateKeysAsync(::BGNet::Core::ITaskUtility* taskUtility, ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::__DiffieHellmanUtility__KeyType keyType);

  /// @brief Method GenerateKeys, addr 0xe2efd4, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IDiffieHellmanKeyPair* GenerateKeys(::GlobalNamespace::__DiffieHellmanUtility__KeyType keyType);

  /// @brief Method GenerateDiffieHellmanKeys, addr 0xe32d70, size 0x184, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair* GenerateDiffieHellmanKeys();

  /// @brief Method GenerateElipticalCurveKeys, addr 0xe32be0, size 0x190, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair* GenerateElipticalCurveKeys();

  /// @brief Method GetPreMasterSecret, addr 0xe3302c, size 0x19c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreMasterSecret(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* dhBasicAgreement,
                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  /// @brief Method GetPreMasterSecret, addr 0xe331c8, size 0x1d0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreMasterSecret(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* ecdhBasicAgreement,
                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  // Ctor Parameters [CppParam { name: "", ty: "DiffieHellmanUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiffieHellmanUtility(DiffieHellmanUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiffieHellmanUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiffieHellmanUtility(DiffieHellmanUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiffieHellmanUtility();

public:
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
