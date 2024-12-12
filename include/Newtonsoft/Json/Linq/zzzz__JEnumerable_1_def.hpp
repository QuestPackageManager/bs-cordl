#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JEnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__IJEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JEnumerable_1)
namespace Newtonsoft::Json::Linq {
template <typename T> class IJEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
template <typename T> struct JEnumerable_1;
}
// Write type traits
MARK_GEN_VAL_T(::Newtonsoft::Json::Linq::JEnumerable_1);
// Dependencies Newtonsoft.Json.Linq.IJEnumerable`1<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.IEquatable`1<T>
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Newtonsoft.Json.Linq.JEnumerable`1<T>
struct CORDL_TYPE JEnumerable_1 {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::Newtonsoft::Json::Linq::JEnumerable_1<T> Empty;

  __declspec(property(get = get_Item)) ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Item[];

  /// @brief Convert operator to "::Newtonsoft::Json::Linq::IJEnumerable_1<T>"
  constexpr operator ::Newtonsoft::Json::Linq::IJEnumerable_1<T>*();

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert operator to "::System::IEquatable_1<::Newtonsoft::Json::Linq::JEnumerable_1<T>>"
  constexpr operator ::System::IEquatable_1<::Newtonsoft::Json::Linq::JEnumerable_1<T>>*();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::Newtonsoft::Json::Linq::JEnumerable_1<T> other);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator();

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>* enumerable);

  static inline ::Newtonsoft::Json::Linq::JEnumerable_1<T> getStaticF_Empty();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* get_Item(::System::Object* key);

  /// @brief Convert to "::Newtonsoft::Json::Linq::IJEnumerable_1<T>"
  constexpr ::Newtonsoft::Json::Linq::IJEnumerable_1<T>* i___Newtonsoft__Json__Linq__IJEnumerable_1_T_();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Convert to "::System::IEquatable_1<::Newtonsoft::Json::Linq::JEnumerable_1<T>>"
  constexpr ::System::IEquatable_1<::Newtonsoft::Json::Linq::JEnumerable_1<T>>* i___System__IEquatable_1___Newtonsoft__Json__Linq__JEnumerable_1_T__();

  static inline void setStaticF_Empty(::Newtonsoft::Json::Linq::JEnumerable_1<T> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr JEnumerable_1();

  // Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IEnumerable_1<T>*", modifiers: "", def_value: None }]
  constexpr JEnumerable_1(::System::Collections::Generic::IEnumerable_1<T>* _enumerable) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10395 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _enumerable, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* _enumerable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Newtonsoft::Json::Linq::JEnumerable_1, "Newtonsoft.Json.Linq", "JEnumerable`1");
