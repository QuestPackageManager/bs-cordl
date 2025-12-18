#pragma once
// IWYU pragma private; include "System/Index.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Index)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
struct Index;
}
// Write type traits
MARK_VAL_T(::System::Index);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Index
struct CORDL_TYPE Index {
public:
  // Declarations
  __declspec(property(get = get_IsFromEnd)) bool IsFromEnd;

  __declspec(property(get = get_Value)) int32_t Value;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Index>"
  constexpr operator ::System::IEquatable_1<::System::Index>*();

  /// @brief Method Equals, addr 0x5a93e04, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::System::Index other);

  /// @brief Method Equals, addr 0x5a93d88, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method FromStart, addr 0x5a93d48, size 0x14, virtual false, abstract: false, final false
  static inline ::System::Index FromStart(int32_t value);

  /// @brief Method GetHashCode, addr 0x5a93e14, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetOffset, addr 0x5a93d74, size 0x14, virtual false, abstract: false, final false
  inline int32_t GetOffset(int32_t length);

  /// @brief Method ToString, addr 0x5a93e30, size 0x28, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToStringFromEnd, addr 0x5a93e58, size 0x180, virtual false, abstract: false, final false
  inline ::StringW ToStringFromEnd();

  /// @brief Method .ctor, addr 0x5a93d40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method get_IsFromEnd, addr 0x5a93d68, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsFromEnd();

  /// @brief Method get_Value, addr 0x5a93d5c, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_Value();

  /// @brief Convert to "::System::IEquatable_1<::System::Index>"
  constexpr ::System::IEquatable_1<::System::Index>* i___System__IEquatable_1___System__Index_();

  /// @brief Method op_Implicit, addr 0x5a93e1c, size 0x14, virtual false, abstract: false, final false
  static inline ::System::Index op_Implicit___System__Index(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Index();

  // Ctor Parameters [CppParam { name: "_value", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Index(int32_t _value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2424 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field _value, offset: 0x0, size: 0x4, def value: None
  int32_t _value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Index, _value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Index, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Index, "System", "Index");
