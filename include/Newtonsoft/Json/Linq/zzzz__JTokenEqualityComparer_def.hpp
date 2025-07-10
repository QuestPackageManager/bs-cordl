#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JTokenEqualityComparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JTokenEqualityComparer)
namespace Newtonsoft::Json::Linq {
class JToken;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JTokenEqualityComparer;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JTokenEqualityComparer);
// Dependencies System.Collections.Generic.IEqualityComparer`1<T>, System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JTokenEqualityComparer
class CORDL_TYPE JTokenEqualityComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Method Equals, addr 0x3f2a0b4, size 0x68, virtual true, abstract: false, final true
  inline bool Equals(::Newtonsoft::Json::Linq::JToken* x, ::Newtonsoft::Json::Linq::JToken* y);

  /// @brief Method GetHashCode, addr 0x3f2a11c, size 0x24, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::Newtonsoft::Json::Linq::JToken* obj);

  static inline ::Newtonsoft::Json::Linq::JTokenEqualityComparer* New_ctor();

  /// @brief Method .ctor, addr 0x3f2a140, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEqualityComparer_1___Newtonsoft__Json__Linq__JToken__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JTokenEqualityComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JTokenEqualityComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JTokenEqualityComparer(JTokenEqualityComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JTokenEqualityComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JTokenEqualityComparer(JTokenEqualityComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10429 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JTokenEqualityComparer, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JTokenEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JTokenEqualityComparer*, "Newtonsoft.Json.Linq", "JTokenEqualityComparer");
