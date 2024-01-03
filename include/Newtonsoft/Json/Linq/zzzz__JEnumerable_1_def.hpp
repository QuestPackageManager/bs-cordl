#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
class IEnumerable;
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
// Type: Newtonsoft.Json.Linq::JEnumerable`1
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11989), inst: 2991 }), TypeDefinitionIndex(TypeDefinitionIndex(11989))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11989))
// CS Name: ::Newtonsoft.Json.Linq::JEnumerable`1<T>
struct CORDL_TYPE JEnumerable_1 {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::Newtonsoft::Json::Linq::JEnumerable_1<T> Empty;

  __declspec(property(get = get_Item))::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Item[];

  /// @brief Convert operator to "::Newtonsoft::Json::Linq::IJEnumerable_1<T>"
  constexpr operator ::Newtonsoft::Json::Linq::IJEnumerable_1<T>*();

  /// @brief Convert to "::Newtonsoft::Json::Linq::IJEnumerable_1<T>"
  constexpr ::Newtonsoft::Json::Linq::IJEnumerable_1<T>* i___Newtonsoft__Json__Linq__IJEnumerable_1_T_();

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  static inline void setStaticF_Empty(::Newtonsoft::Json::Linq::JEnumerable_1<T> value);

  static inline ::Newtonsoft::Json::Linq::JEnumerable_1<T> getStaticF_Empty();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>* enumerable);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* get_Item(::System::Object* key);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Equals(::Newtonsoft::Json::Linq::JEnumerable_1<T> other);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IEnumerable_1<T>*", modifiers: "", def_value: None }]
  constexpr JEnumerable_1(::System::Collections::Generic::IEnumerable_1<T>* _enumerable) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr JEnumerable_1();

  /// @brief Field _enumerable, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* _enumerable;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Newtonsoft::Json::Linq::JEnumerable_1, "Newtonsoft.Json.Linq", "JEnumerable`1");
