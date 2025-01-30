#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/StructMultiKey_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StructMultiKey_2)
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template <typename T1, typename T2> struct StructMultiKey_2;
}
// Write type traits
MARK_GEN_VAL_T(::Newtonsoft::Json::Utilities::StructMultiKey_2);
// Dependencies System.IEquatable`1<T>
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename T1, typename T2>
// Is value type: true
// CS Name: Newtonsoft.Json.Utilities.StructMultiKey`2<T1,T2>
struct CORDL_TYPE StructMultiKey_2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1,T2>>"
  constexpr operator ::System::IEquatable_1<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>*();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2> other);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T1 v1, T2 v2);

  /// @brief Convert to "::System::IEquatable_1<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1,T2>>"
  constexpr ::System::IEquatable_1<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>* i___System__IEquatable_1___Newtonsoft__Json__Utilities__StructMultiKey_2_T1_T2__();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StructMultiKey_2();

  // Ctor Parameters [CppParam { name: "Value1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Value2", ty: "T2", modifiers: "", def_value: None }]
  constexpr StructMultiKey_2(T1 Value1, T2 Value2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10278 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Value1, offset: 0x0, size: 0x8, def value: None
  T1 Value1;

  /// @brief Field Value2, offset: 0x8, size: 0x8, def value: None
  T2 Value2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Newtonsoft::Json::Utilities::StructMultiKey_2, "Newtonsoft.Json.Utilities", "StructMultiKey`2");
