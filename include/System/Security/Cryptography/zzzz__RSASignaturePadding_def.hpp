#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__RSASignaturePaddingMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSASignaturePadding)
namespace System::Security::Cryptography {
struct RSASignaturePaddingMode;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSASignaturePadding;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSASignaturePadding);
// Type: System.Security.Cryptography::RSASignaturePadding
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2915))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2914))
// CS Name: ::System.Security.Cryptography::RSASignaturePadding*
class CORDL_TYPE RSASignaturePadding : public ::System::Object {
public:
  // Declarations
  /// @brief Field _mode, offset 0x10, size 0x4
  __declspec(property(get = __get__mode, put = __set__mode))::System::Security::Cryptography::RSASignaturePaddingMode _mode;

  /// @brief Field s_pkcs1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_pkcs1, put = setStaticF_s_pkcs1))::System::Security::Cryptography::RSASignaturePadding* s_pkcs1;

  /// @brief Field s_pss, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_pss, put = setStaticF_s_pss))::System::Security::Cryptography::RSASignaturePadding* s_pss;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Security::Cryptography::RSASignaturePadding*>"
  constexpr operator ::System::IEquatable_1<::System::Security::Cryptography::RSASignaturePadding*>*() noexcept;

  constexpr ::System::Security::Cryptography::RSASignaturePaddingMode& __get__mode();

  constexpr ::System::Security::Cryptography::RSASignaturePaddingMode const& __get__mode() const;

  constexpr void __set__mode(::System::Security::Cryptography::RSASignaturePaddingMode value);

  static inline void setStaticF_s_pkcs1(::System::Security::Cryptography::RSASignaturePadding* value);

  static inline ::System::Security::Cryptography::RSASignaturePadding* getStaticF_s_pkcs1();

  static inline void setStaticF_s_pss(::System::Security::Cryptography::RSASignaturePadding* value);

  static inline ::System::Security::Cryptography::RSASignaturePadding* getStaticF_s_pss();

  static inline ::System::Security::Cryptography::RSASignaturePadding* New_ctor(::System::Security::Cryptography::RSASignaturePaddingMode mode);

  /// @brief Method .ctor addr 0x23021f8 size 0x28 virtual false final false
  inline void _ctor(::System::Security::Cryptography::RSASignaturePaddingMode mode);

  /// @brief Method get_Pkcs1 addr 0x2302220 size 0x58 virtual false final false
  static inline ::System::Security::Cryptography::RSASignaturePadding* get_Pkcs1();

  /// @brief Method GetHashCode addr 0x2302278 size 0xc virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x2302284 size 0x64 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x23022e8 size 0x8c virtual true final true
  inline bool Equals(::System::Security::Cryptography::RSASignaturePadding* other);

  /// @brief Method op_Equality addr 0x23023e4 size 0x14 virtual false final false
  static inline bool op_Equality(::System::Security::Cryptography::RSASignaturePadding* left, ::System::Security::Cryptography::RSASignaturePadding* right);

  /// @brief Method op_Inequality addr 0x2302374 size 0x70 virtual false final false
  static inline bool op_Inequality(::System::Security::Cryptography::RSASignaturePadding* left, ::System::Security::Cryptography::RSASignaturePadding* right);

  /// @brief Method ToString addr 0x23023f8 size 0x68 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "RSASignaturePadding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSASignaturePadding(RSASignaturePadding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSASignaturePadding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSASignaturePadding(RSASignaturePadding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSASignaturePadding();

public:
  /// @brief Field _mode, offset: 0x10, size: 0x4, def value: None
  ::System::Security::Cryptography::RSASignaturePaddingMode ____mode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSASignaturePadding, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSASignaturePadding, ____mode) == 0x10, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSASignaturePadding);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSASignaturePadding*, "System.Security.Cryptography", "RSASignaturePadding");
