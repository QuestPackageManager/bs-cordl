#pragma once
// IWYU pragma private; include "System/Range.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Index_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Range)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
struct Index;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
struct Range;
}
// Write type traits
MARK_VAL_T(::System::Range);
// Dependencies System.Index
namespace System {
// Is value type: true
// CS Name: System.Range
struct CORDL_TYPE Range {
public:
  // Declarations
  __declspec(property(get = get_End)) ::System::Index End;

  __declspec(property(get = get_Start)) ::System::Index Start;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Range>"
  constexpr operator ::System::IEquatable_1<::System::Range>*();

  /// @brief Method Equals, addr 0x5a434fc, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::System::Range other);

  /// @brief Method Equals, addr 0x5a43470, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x5a43524, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x5a435a0, size 0x240, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x5a43468, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Index start, ::System::Index end);

  /// @brief Method get_End, addr 0x5a43460, size 0x8, virtual false, abstract: false, final false
  inline ::System::Index get_End();

  /// @brief Method get_Start, addr 0x5a43458, size 0x8, virtual false, abstract: false, final false
  inline ::System::Index get_Start();

  /// @brief Convert to "::System::IEquatable_1<::System::Range>"
  constexpr ::System::IEquatable_1<::System::Range>* i___System__IEquatable_1___System__Range_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Range();

  // Ctor Parameters [CppParam { name: "_Start_k__BackingField", ty: "::System::Index", modifiers: "", def_value: None }, CppParam { name: "_End_k__BackingField", ty: "::System::Index", modifiers: "",
  // def_value: None }]
  constexpr Range(::System::Index _Start_k__BackingField, ::System::Index _End_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2466 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field <Start>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::System::Index _Start_k__BackingField;

  /// @brief Field <End>k__BackingField, offset: 0x4, size: 0x4, def value: None
  ::System::Index _End_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Range, _Start_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Range, _End_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Range, 0x8>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Range, "System", "Range");
