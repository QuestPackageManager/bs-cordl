#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TripleDESTransform)
namespace System::Security::Cryptography {
class DESTransform;
}
namespace System::Security::Cryptography {
class TripleDES;
}
// Forward declare root types
namespace System::Security::Cryptography {
class TripleDESTransform;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::TripleDESTransform);
// Type: System.Security.Cryptography::TripleDESTransform
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::TripleDESTransform*
class CORDL_TYPE TripleDESTransform : public ::Mono::Security::Cryptography::SymmetricTransform {
public:
  // Declarations
  /// @brief Field D1, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_D1, put = __cordl_internal_set_D1))::System::Security::Cryptography::DESTransform* D1;

  /// @brief Field D2, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_D2, put = __cordl_internal_set_D2))::System::Security::Cryptography::DESTransform* D2;

  /// @brief Field D3, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_D3, put = __cordl_internal_set_D3))::System::Security::Cryptography::DESTransform* D3;

  /// @brief Field E1, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_E1, put = __cordl_internal_set_E1))::System::Security::Cryptography::DESTransform* E1;

  /// @brief Field E2, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_E2, put = __cordl_internal_set_E2))::System::Security::Cryptography::DESTransform* E2;

  /// @brief Field E3, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_E3, put = __cordl_internal_set_E3))::System::Security::Cryptography::DESTransform* E3;

  /// @brief Method ECB, addr 0x25686dc, size 0x120, virtual true, abstract: false, final false
  inline void ECB(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method GetStrongKey, addr 0x2568638, size 0xa4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetStrongKey();

  static inline ::System::Security::Cryptography::TripleDESTransform* New_ctor(::System::Security::Cryptography::TripleDES* algo, bool encryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> key,
                                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  constexpr ::System::Security::Cryptography::DESTransform*& __cordl_internal_get_D1();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& __cordl_internal_get_D1() const;

  constexpr ::System::Security::Cryptography::DESTransform*& __cordl_internal_get_D2();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& __cordl_internal_get_D2() const;

  constexpr ::System::Security::Cryptography::DESTransform*& __cordl_internal_get_D3();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& __cordl_internal_get_D3() const;

  constexpr ::System::Security::Cryptography::DESTransform*& __cordl_internal_get_E1();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& __cordl_internal_get_E1() const;

  constexpr ::System::Security::Cryptography::DESTransform*& __cordl_internal_get_E2();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& __cordl_internal_get_E2() const;

  constexpr ::System::Security::Cryptography::DESTransform*& __cordl_internal_get_E3();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& __cordl_internal_get_E3() const;

  constexpr void __cordl_internal_set_D1(::System::Security::Cryptography::DESTransform* value);

  constexpr void __cordl_internal_set_D2(::System::Security::Cryptography::DESTransform* value);

  constexpr void __cordl_internal_set_D3(::System::Security::Cryptography::DESTransform* value);

  constexpr void __cordl_internal_set_E1(::System::Security::Cryptography::DESTransform* value);

  constexpr void __cordl_internal_set_E2(::System::Security::Cryptography::DESTransform* value);

  constexpr void __cordl_internal_set_E3(::System::Security::Cryptography::DESTransform* value);

  /// @brief Method .ctor, addr 0x255f588, size 0x320, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::TripleDES* algo, bool encryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TripleDESTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TripleDESTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TripleDESTransform(TripleDESTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TripleDESTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TripleDESTransform(TripleDESTransform const&) = delete;

  /// @brief Field E1, offset: 0x58, size: 0x8, def value: None
  ::System::Security::Cryptography::DESTransform* ___E1;

  /// @brief Field D2, offset: 0x60, size: 0x8, def value: None
  ::System::Security::Cryptography::DESTransform* ___D2;

  /// @brief Field E3, offset: 0x68, size: 0x8, def value: None
  ::System::Security::Cryptography::DESTransform* ___E3;

  /// @brief Field D1, offset: 0x70, size: 0x8, def value: None
  ::System::Security::Cryptography::DESTransform* ___D1;

  /// @brief Field E2, offset: 0x78, size: 0x8, def value: None
  ::System::Security::Cryptography::DESTransform* ___E2;

  /// @brief Field D3, offset: 0x80, size: 0x8, def value: None
  ::System::Security::Cryptography::DESTransform* ___D3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::TripleDESTransform, 0x88>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::TripleDESTransform, ___E1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::TripleDESTransform, ___D2) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::TripleDESTransform, ___E3) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::TripleDESTransform, ___D1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::TripleDESTransform, ___E2) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::TripleDESTransform, ___D3) == 0x80, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::TripleDESTransform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::TripleDESTransform*, "System.Security.Cryptography", "TripleDESTransform");
