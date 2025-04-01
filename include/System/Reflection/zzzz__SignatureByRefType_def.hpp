#pragma once
// IWYU pragma private; include "System/Reflection/SignatureByRefType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__SignatureHasElementType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureByRefType)
namespace System::Reflection {
class SignatureType;
}
// Forward declare root types
namespace System::Reflection {
class SignatureByRefType;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::SignatureByRefType);
// Dependencies System.Reflection.SignatureHasElementType
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.SignatureByRefType
class CORDL_TYPE SignatureByRefType : public ::System::Reflection::SignatureHasElementType {
public:
  // Declarations
  __declspec(property(get = get_IsSZArray)) bool IsSZArray;

  __declspec(property(get = get_IsVariableBoundArray)) bool IsVariableBoundArray;

  __declspec(property(get = get_Suffix)) ::StringW Suffix;

  /// @brief Method GetArrayRank, addr 0x3d212c4, size 0x4c, virtual true, abstract: false, final true
  inline int32_t GetArrayRank();

  /// @brief Method IsArrayImpl, addr 0x3d2129c, size 0x8, virtual true, abstract: false, final true
  inline bool IsArrayImpl();

  /// @brief Method IsByRefImpl, addr 0x3d212a4, size 0x8, virtual true, abstract: false, final true
  inline bool IsByRefImpl();

  /// @brief Method IsPointerImpl, addr 0x3d212ac, size 0x8, virtual true, abstract: false, final true
  inline bool IsPointerImpl();

  static inline ::System::Reflection::SignatureByRefType* New_ctor(::System::Reflection::SignatureType* elementType);

  /// @brief Method .ctor, addr 0x3d21278, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::SignatureType* elementType);

  /// @brief Method get_IsSZArray, addr 0x3d212b4, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSZArray();

  /// @brief Method get_IsVariableBoundArray, addr 0x3d212bc, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsVariableBoundArray();

  /// @brief Method get_Suffix, addr 0x3d21310, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_Suffix();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureByRefType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignatureByRefType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureByRefType(SignatureByRefType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureByRefType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureByRefType(SignatureByRefType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3493 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::SignatureByRefType, 0x20>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::SignatureByRefType);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::SignatureByRefType*, "System.Reflection", "SignatureByRefType");
