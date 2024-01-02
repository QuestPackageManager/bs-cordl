#pragma once
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
// Type: System.Reflection::SignatureArrayType
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3493))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3490))
// CS Name: ::System.Reflection::SignatureArrayType*
class CORDL_TYPE SignatureArrayType : public ::System::Reflection::SignatureHasElementType {
public:
  // Declarations
  /// @brief Field _rank, offset 0x20, size 0x4
  __declspec(property(get = __get__rank, put = __set__rank)) int32_t _rank;

  /// @brief Field _isMultiDim, offset 0x24, size 0x1
  __declspec(property(get = __get__isMultiDim, put = __set__isMultiDim)) bool _isMultiDim;

  __declspec(property(get = get_IsSZArray)) bool IsSZArray;

  __declspec(property(get = get_IsVariableBoundArray)) bool IsVariableBoundArray;

  __declspec(property(get = get_Suffix))::StringW Suffix;

  constexpr int32_t& __get__rank();

  constexpr int32_t const& __get__rank() const;

  constexpr void __set__rank(int32_t value);

  constexpr bool& __get__isMultiDim();

  constexpr bool const& __get__isMultiDim() const;

  constexpr void __set__isMultiDim(bool value);

  static inline ::System::Reflection::SignatureArrayType* New_ctor(::System::Reflection::SignatureType* elementType, int32_t rank, bool isMultiDim);

  /// @brief Method .ctor, addr 0x24e9e84, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::SignatureType* elementType, int32_t rank, bool isMultiDim);

  /// @brief Method IsArrayImpl, addr 0x24e9ee4, size 0x8, virtual true, abstract: false, final true
  inline bool IsArrayImpl();

  /// @brief Method IsByRefImpl, addr 0x24e9eec, size 0x8, virtual true, abstract: false, final true
  inline bool IsByRefImpl();

  /// @brief Method IsPointerImpl, addr 0x24e9ef4, size 0x8, virtual true, abstract: false, final true
  inline bool IsPointerImpl();

  /// @brief Method get_IsSZArray, addr 0x24e9efc, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsSZArray();

  /// @brief Method get_IsVariableBoundArray, addr 0x24e9f0c, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsVariableBoundArray();

  /// @brief Method GetArrayRank, addr 0x24e9f14, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetArrayRank();

  /// @brief Method get_Suffix, addr 0x24e9f1c, size 0xc8, virtual true, abstract: false, final true
  inline ::StringW get_Suffix();

  // Ctor Parameters [CppParam { name: "", ty: "SignatureArrayType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureArrayType(SignatureArrayType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureArrayType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureArrayType(SignatureArrayType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureArrayType();

public:
  /// @brief Field _rank, offset: 0x20, size: 0x4, def value: None
  int32_t ____rank;

  /// @brief Field _isMultiDim, offset: 0x24, size: 0x1, def value: None
  bool ____isMultiDim;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::SignatureArrayType, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::SignatureArrayType, ____rank) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::SignatureArrayType, ____isMultiDim) == 0x24, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::SignatureArrayType);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::SignatureArrayType*, "System.Reflection", "SignatureArrayType");
