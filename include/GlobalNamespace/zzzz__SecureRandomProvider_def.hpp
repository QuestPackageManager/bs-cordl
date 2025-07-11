#pragma once
// IWYU pragma private; include "GlobalNamespace/SecureRandomProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecureRandomProvider)
namespace GlobalNamespace {
class SecureRandomProvider_SecureRandomState;
}
namespace System::Security::Cryptography {
class RNGCryptoServiceProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class SecureRandomProvider;
}
namespace GlobalNamespace {
class SecureRandomProvider_SecureRandomState;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SecureRandomProvider);
MARK_REF_PTR_T(::GlobalNamespace::SecureRandomProvider_SecureRandomState);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SecureRandomProvider/SecureRandomState
class CORDL_TYPE SecureRandomProvider_SecureRandomState : public ::System::Object {
public:
  // Declarations
  /// @brief Field _index, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field _random, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::System::Security::Cryptography::RNGCryptoServiceProvider* _random;

  /// @brief Field _randomBuffer0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__randomBuffer0, put = __cordl_internal_set__randomBuffer0)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _randomBuffer0;

  /// @brief Field _randomBuffer1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__randomBuffer1, put = __cordl_internal_set__randomBuffer1)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _randomBuffer1;

  /// @brief Method FillBuffer, addr 0x22e6e78, size 0x114, virtual false, abstract: false, final false
  inline void FillBuffer();

  /// @brief Method GetByte, addr 0x22e6bcc, size 0xa8, virtual false, abstract: false, final false
  inline uint8_t GetByte();

  /// @brief Method GetBytes, addr 0x22e6ab4, size 0xb8, virtual false, abstract: false, final false
  inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length);

  static inline ::GlobalNamespace::SecureRandomProvider_SecureRandomState* New_ctor();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr ::System::Security::Cryptography::RNGCryptoServiceProvider* const& __cordl_internal_get__random() const;

  constexpr ::System::Security::Cryptography::RNGCryptoServiceProvider*& __cordl_internal_get__random();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__randomBuffer0() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__randomBuffer0();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__randomBuffer1() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__randomBuffer1();

  constexpr void __cordl_internal_set__index(int32_t value);

  constexpr void __cordl_internal_set__random(::System::Security::Cryptography::RNGCryptoServiceProvider* value);

  constexpr void __cordl_internal_set__randomBuffer0(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__randomBuffer1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x22e6dd4, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecureRandomProvider_SecureRandomState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecureRandomProvider_SecureRandomState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecureRandomProvider_SecureRandomState(SecureRandomProvider_SecureRandomState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecureRandomProvider_SecureRandomState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecureRandomProvider_SecureRandomState(SecureRandomProvider_SecureRandomState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14966 };

  /// @brief Field kBufferSize offset 0xffffffff size 0x4
  static constexpr int32_t kBufferSize{ static_cast<int32_t>(0x4000) };

  /// @brief Field _random, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::RNGCryptoServiceProvider* ____random;

  /// @brief Field _randomBuffer0, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____randomBuffer0;

  /// @brief Field _randomBuffer1, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____randomBuffer1;

  /// @brief Field _index, offset: 0x28, size: 0x4, def value: None
  int32_t ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SecureRandomProvider_SecureRandomState, ____random) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecureRandomProvider_SecureRandomState, ____randomBuffer0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecureRandomProvider_SecureRandomState, ____randomBuffer1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecureRandomProvider_SecureRandomState, ____index) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SecureRandomProvider_SecureRandomState, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SecureRandomProvider
class CORDL_TYPE SecureRandomProvider : public ::System::Object {
public:
  // Declarations
  using SecureRandomState = ::GlobalNamespace::SecureRandomProvider_SecureRandomState;

  /// @brief Field _secureRandomState, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__secureRandomState, put = setStaticF__secureRandomState)) ::GlobalNamespace::SecureRandomProvider_SecureRandomState* _secureRandomState;

  /// @brief Method GetByte, addr 0x22e6b6c, size 0x60, virtual false, abstract: false, final false
  static inline uint8_t GetByte();

  /// @brief Method GetBytes, addr 0x22e6a0c, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(int32_t length);

  /// @brief Method GetBytes, addr 0x22e6cf4, size 0x74, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method GetBytes, addr 0x22e6c74, size 0x80, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length);

  static inline ::GlobalNamespace::SecureRandomProvider_SecureRandomState* getStaticF__secureRandomState();

  static inline void setStaticF__secureRandomState(::GlobalNamespace::SecureRandomProvider_SecureRandomState* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecureRandomProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecureRandomProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecureRandomProvider(SecureRandomProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecureRandomProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecureRandomProvider(SecureRandomProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14967 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SecureRandomProvider, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SecureRandomProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SecureRandomProvider*, "", "SecureRandomProvider");
NEED_NO_BOX(::GlobalNamespace::SecureRandomProvider_SecureRandomState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SecureRandomProvider_SecureRandomState*, "", "SecureRandomProvider/SecureRandomState");
