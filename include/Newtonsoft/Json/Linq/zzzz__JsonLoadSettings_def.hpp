#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonLoadSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__CommentHandling_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__DuplicatePropertyNameHandling_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__LineInfoHandling_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JsonLoadSettings)
namespace Newtonsoft::Json::Linq {
struct CommentHandling;
}
namespace Newtonsoft::Json::Linq {
struct DuplicatePropertyNameHandling;
}
namespace Newtonsoft::Json::Linq {
struct LineInfoHandling;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonLoadSettings);
// Dependencies Newtonsoft.Json.Linq.CommentHandling, Newtonsoft.Json.Linq.DuplicatePropertyNameHandling, Newtonsoft.Json.Linq.LineInfoHandling, System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JsonLoadSettings
class CORDL_TYPE JsonLoadSettings : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CommentHandling, put = set_CommentHandling)) ::Newtonsoft::Json::Linq::CommentHandling CommentHandling;

  __declspec(property(get = get_DuplicatePropertyNameHandling, put = set_DuplicatePropertyNameHandling)) ::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling DuplicatePropertyNameHandling;

  __declspec(property(get = get_LineInfoHandling, put = set_LineInfoHandling)) ::Newtonsoft::Json::Linq::LineInfoHandling LineInfoHandling;

  /// @brief Field _commentHandling, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__commentHandling, put = __cordl_internal_set__commentHandling)) ::Newtonsoft::Json::Linq::CommentHandling _commentHandling;

  /// @brief Field _duplicatePropertyNameHandling, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__duplicatePropertyNameHandling,
                      put = __cordl_internal_set__duplicatePropertyNameHandling)) ::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling _duplicatePropertyNameHandling;

  /// @brief Field _lineInfoHandling, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__lineInfoHandling, put = __cordl_internal_set__lineInfoHandling)) ::Newtonsoft::Json::Linq::LineInfoHandling _lineInfoHandling;

  static inline ::Newtonsoft::Json::Linq::JsonLoadSettings* New_ctor();

  constexpr ::Newtonsoft::Json::Linq::CommentHandling const& __cordl_internal_get__commentHandling() const;

  constexpr ::Newtonsoft::Json::Linq::CommentHandling& __cordl_internal_get__commentHandling();

  constexpr ::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling const& __cordl_internal_get__duplicatePropertyNameHandling() const;

  constexpr ::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling& __cordl_internal_get__duplicatePropertyNameHandling();

  constexpr ::Newtonsoft::Json::Linq::LineInfoHandling const& __cordl_internal_get__lineInfoHandling() const;

  constexpr ::Newtonsoft::Json::Linq::LineInfoHandling& __cordl_internal_get__lineInfoHandling();

  constexpr void __cordl_internal_set__commentHandling(::Newtonsoft::Json::Linq::CommentHandling value);

  constexpr void __cordl_internal_set__duplicatePropertyNameHandling(::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling value);

  constexpr void __cordl_internal_set__lineInfoHandling(::Newtonsoft::Json::Linq::LineInfoHandling value);

  /// @brief Method .ctor, addr 0x3f2c978, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CommentHandling, addr 0x3f2c9a0, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::CommentHandling get_CommentHandling();

  /// @brief Method get_DuplicatePropertyNameHandling, addr 0x3f2ca70, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling get_DuplicatePropertyNameHandling();

  /// @brief Method get_LineInfoHandling, addr 0x3f2ca08, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::LineInfoHandling get_LineInfoHandling();

  /// @brief Method set_CommentHandling, addr 0x3f2c9a8, size 0x60, virtual false, abstract: false, final false
  inline void set_CommentHandling(::Newtonsoft::Json::Linq::CommentHandling value);

  /// @brief Method set_DuplicatePropertyNameHandling, addr 0x3f2ca78, size 0x60, virtual false, abstract: false, final false
  inline void set_DuplicatePropertyNameHandling(::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling value);

  /// @brief Method set_LineInfoHandling, addr 0x3f2ca10, size 0x60, virtual false, abstract: false, final false
  inline void set_LineInfoHandling(::Newtonsoft::Json::Linq::LineInfoHandling value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonLoadSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonLoadSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonLoadSettings(JsonLoadSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonLoadSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonLoadSettings(JsonLoadSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10418 };

  /// @brief Field _commentHandling, offset: 0x10, size: 0x4, def value: None
  ::Newtonsoft::Json::Linq::CommentHandling ____commentHandling;

  /// @brief Field _lineInfoHandling, offset: 0x14, size: 0x4, def value: None
  ::Newtonsoft::Json::Linq::LineInfoHandling ____lineInfoHandling;

  /// @brief Field _duplicatePropertyNameHandling, offset: 0x18, size: 0x4, def value: None
  ::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling ____duplicatePropertyNameHandling;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JsonLoadSettings, ____commentHandling) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonLoadSettings, ____lineInfoHandling) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonLoadSettings, ____duplicatePropertyNameHandling) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonLoadSettings, 0x20>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonLoadSettings);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonLoadSettings*, "Newtonsoft.Json.Linq", "JsonLoadSettings");
