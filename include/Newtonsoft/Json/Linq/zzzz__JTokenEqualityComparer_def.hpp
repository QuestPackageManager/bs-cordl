#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JTokenEqualityComparer)
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JTokenEqualityComparer;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JTokenEqualityComparer);
// Type: Newtonsoft.Json.Linq::JTokenEqualityComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11976))
// CS Name: ::Newtonsoft.Json.Linq::JTokenEqualityComparer*
class CORDL_TYPE JTokenEqualityComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEqualityComparer_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Method Equals, addr 0x2691410, size 0x94, virtual true, abstract: false, final true
  inline bool Equals(::Newtonsoft::Json::Linq::JToken* x, ::Newtonsoft::Json::Linq::JToken* y);

  /// @brief Method GetHashCode, addr 0x26914d0, size 0x24, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::Newtonsoft::Json::Linq::JToken* obj);

  static inline ::Newtonsoft::Json::Linq::JTokenEqualityComparer* New_ctor();

  /// @brief Method .ctor, addr 0x26914f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "JTokenEqualityComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JTokenEqualityComparer(JTokenEqualityComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JTokenEqualityComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JTokenEqualityComparer(JTokenEqualityComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JTokenEqualityComparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JTokenEqualityComparer, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JTokenEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JTokenEqualityComparer*, "Newtonsoft.Json.Linq", "JTokenEqualityComparer");
