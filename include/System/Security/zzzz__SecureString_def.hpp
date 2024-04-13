#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecureString)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security {
class SecureString;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::SecureString);
// Type: System.Security::SecureString
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security {
// Is value type: false
// CS Name: ::System.Security::SecureString*
class CORDL_TYPE SecureString : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief Field disposed, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field length, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) int32_t length;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Alloc, addr 0x26d5838, size 0x17c, virtual false, abstract: false, final false
  inline void Alloc(int32_t length, bool realloc);

  /// @brief Method Decrypt, addr 0x26d5ba0, size 0x4, virtual false, abstract: false, final false
  inline void Decrypt();

  /// @brief Method Dispose, addr 0x26d5b68, size 0x38, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Encrypt, addr 0x26d5b00, size 0x4, virtual false, abstract: false, final false
  inline void Encrypt();

  /// @brief Method GetBuffer, addr 0x26d5ba4, size 0xb0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBuffer();

  static inline ::System::Security::SecureString* New_ctor();

  static inline ::System::Security::SecureString* New_ctor(::cordl_internals::Ptr<char16_t> value, int32_t length);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_data() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_data();

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr int32_t const& __cordl_internal_get_length() const;

  constexpr int32_t& __cordl_internal_get_length();

  constexpr void __cordl_internal_set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_length(int32_t value);

  /// @brief Method .ctor, addr 0x26d5814, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x26d59b4, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<char16_t> value, int32_t length);

  /// @brief Method get_Length, addr 0x26d5b04, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecureString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecureString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecureString(SecureString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecureString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecureString(SecureString const&) = delete;

  /// @brief Field length, offset: 0x10, size: 0x4, def value: None
  int32_t ___length;

  /// @brief Field disposed, offset: 0x14, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::SecureString, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::SecureString, ___length) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::SecureString, ___disposed) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Security::SecureString, ___data) == 0x18, "Offset mismatch!");

} // namespace System::Security
NEED_NO_BOX(::System::Security::SecureString);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::SecureString*, "System.Security", "SecureString");
