#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ISimpleCollator)
namespace System::Globalization {
struct CompareOptions;
}
namespace System::Globalization {
class SortKey;
}
// Forward declare root types
namespace System::Globalization {
class ISimpleCollator;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::ISimpleCollator);
// Type: System.Globalization::ISimpleCollator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3711))
// CS Name: ::System.Globalization::ISimpleCollator*
class CORDL_TYPE ISimpleCollator {
public:
  // Declarations
  /// @brief Method GetSortKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Globalization::SortKey* GetSortKey(::StringW source, ::System::Globalization::CompareOptions options);

  /// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Compare(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2, ::System::Globalization::CompareOptions options);

  /// @brief Method IsPrefix, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsPrefix(::StringW src, ::StringW target, ::System::Globalization::CompareOptions opt);

  /// @brief Method IsSuffix, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsSuffix(::StringW src, ::StringW target, ::System::Globalization::CompareOptions opt);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t IndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt);

  /// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t LastIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt);

  // Ctor Parameters [CppParam { name: "", ty: "ISimpleCollator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISimpleCollator(ISimpleCollator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISimpleCollator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISimpleCollator(ISimpleCollator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::ISimpleCollator);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::ISimpleCollator*, "System.Globalization", "ISimpleCollator");
