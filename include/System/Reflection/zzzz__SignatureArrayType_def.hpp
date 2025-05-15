#pragma once
// IWYU pragma private; include "System/Reflection/SignatureArrayType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__SignatureHasElementType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureArrayType)
namespace System::Reflection {
class SignatureType;
}
// Forward declare root types
namespace System::Reflection {
class SignatureArrayType;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::SignatureArrayType);
// Dependencies System.Reflection.SignatureHasElementType
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.SignatureArrayType
class CORDL_TYPE SignatureArrayType : public ::System::Reflection::SignatureHasElementType {
public:
  // Declarations
  __declspec(property(get = get_IsSZArray)) bool IsSZArray;

  __declspec(property(get = get_IsVariableBoundArray)) bool IsVariableBoundArray;

  __declspec(property(get = get_Suffix)) ::StringW Suffix;

  /// @brief Field _isMultiDim, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__isMultiDim, put = __cordl_internal_set__isMultiDim)) bool _isMultiDim;

  /// @brief Field _rank, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__rank, put = __cordl_internal_set__rank)) int32_t _rank;

  /// @brief Method GetArrayRank, addr 0x3d2611c, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetArrayRank();

  /// @brief Method IsArrayImpl, addr 0x3d260ec, size 0x8, virtual true, abstract: false, final true
  inline bool IsArrayImpl();

  /// @brief Method IsByRefImpl, addr 0x3d260f4, size 0x8, virtual true, abstract: false, final true
  inline bool IsByRefImpl();

  /// @brief Method IsPointerImpl, addr 0x3d260fc, size 0x8, virtual true, abstract: false, final true
  inline bool IsPointerImpl();

  static inline ::System::Reflection::SignatureArrayType* New_ctor(::System::Reflection::SignatureType* elementType, int32_t rank, bool isMultiDim);

  constexpr bool const& __cordl_internal_get__isMultiDim() const;

  constexpr bool& __cordl_internal_get__isMultiDim();

  constexpr int32_t const& __cordl_internal_get__rank() const;

  constexpr int32_t& __cordl_internal_get__rank();

  constexpr void __cordl_internal_set__isMultiDim(bool value);

  constexpr void __cordl_internal_set__rank(int32_t value);

  /// @brief Method .ctor, addr 0x3d2608c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::SignatureType* elementType, int32_t rank, bool isMultiDim);

  /// @brief Method get_IsSZArray, addr 0x3d26104, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsSZArray();

  /// @brief Method get_IsVariableBoundArray, addr 0x3d26114, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsVariableBoundArray();

  /// @brief Method get_Suffix, addr 0x3d26124, size 0xc8, virtual true, abstract: false, final true
  inline ::StringW get_Suffix();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureArrayType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignatureArrayType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureArrayType(SignatureArrayType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureArrayType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureArrayType(SignatureArrayType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3492 };

  /// @brief Field _rank, offset: 0x20, size: 0x4, def value: None
  int32_t ____rank;

  /// @brief Field _isMultiDim, offset: 0x24, size: 0x1, def value: None
  bool ____isMultiDim;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::SignatureArrayType, ____rank) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::SignatureArrayType, ____isMultiDim) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::SignatureArrayType, 0x28>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::SignatureArrayType);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::SignatureArrayType*, "System.Reflection", "SignatureArrayType");
