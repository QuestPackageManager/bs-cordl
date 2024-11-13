#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/IJEnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IJEnumerable_1)
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
template <typename T> class IJEnumerable_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Linq::IJEnumerable_1);
// Type: Newtonsoft.Json.Linq::IJEnumerable`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Newtonsoft.Json.Linq::IJEnumerable`1<T>*
class CORDL_TYPE IJEnumerable_1 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* get_Item(::System::Object* key);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IJEnumerable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IJEnumerable_1(IJEnumerable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IJEnumerable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJEnumerable_1(IJEnumerable_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10359 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Linq::IJEnumerable_1, "Newtonsoft.Json.Linq", "IJEnumerable`1");
