#pragma once
// IWYU pragma private; include "System/Reflection/SignaturePointerType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__SignatureHasElementType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignaturePointerType)
namespace System::Reflection {
class SignatureType;
}
// Forward declare root types
namespace System::Reflection {
class SignaturePointerType;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::SignaturePointerType);
// Dependencies System.Reflection.SignatureHasElementType
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.SignaturePointerType
class CORDL_TYPE SignaturePointerType : public ::System::Reflection::SignatureHasElementType {
public:
  // Declarations
  __declspec(property(get = get_IsSZArray)) bool IsSZArray;

  __declspec(property(get = get_IsVariableBoundArray)) bool IsVariableBoundArray;

  __declspec(property(get = get_Suffix)) ::StringW Suffix;

  /// @brief Method GetArrayRank, addr 0x59d2004, size 0x4c, virtual true, abstract: false, final true
  inline int32_t GetArrayRank();

  /// @brief Method IsArrayImpl, addr 0x59d1fdc, size 0x8, virtual true, abstract: false, final true
  inline bool IsArrayImpl();

  /// @brief Method IsByRefImpl, addr 0x59d1fe4, size 0x8, virtual true, abstract: false, final true
  inline bool IsByRefImpl();

  /// @brief Method IsPointerImpl, addr 0x59d1fec, size 0x8, virtual true, abstract: false, final true
  inline bool IsPointerImpl();

  static inline ::System::Reflection::SignaturePointerType* New_ctor(::System::Reflection::SignatureType* elementType);

  /// @brief Method .ctor, addr 0x59d1fa4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::SignatureType* elementType);

  /// @brief Method get_IsSZArray, addr 0x59d1ff4, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSZArray();

  /// @brief Method get_IsVariableBoundArray, addr 0x59d1ffc, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsVariableBoundArray();

  /// @brief Method get_Suffix, addr 0x59d2050, size 0x44, virtual true, abstract: false, final true
  inline ::StringW get_Suffix();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignaturePointerType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignaturePointerType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignaturePointerType(SignaturePointerType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignaturePointerType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignaturePointerType(SignaturePointerType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3519 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::SignaturePointerType, 0x20>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::SignaturePointerType);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::SignaturePointerType*, "System.Reflection", "SignaturePointerType");
