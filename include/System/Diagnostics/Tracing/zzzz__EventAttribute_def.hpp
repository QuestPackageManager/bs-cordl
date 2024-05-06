#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/Tracing/zzzz__EventKeywords_def.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventLevel_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventAttribute)
namespace System::Diagnostics::Tracing {
struct EventKeywords;
}
namespace System::Diagnostics::Tracing {
struct EventLevel;
}
// Forward declare root types
namespace System::Diagnostics::Tracing {
class EventAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::Tracing::EventAttribute);
// Type: System.Diagnostics.Tracing::EventAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics::Tracing {
// Is value type: false
// CS Name: ::System.Diagnostics.Tracing::EventAttribute*
class CORDL_TYPE EventAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_EventId)) int32_t EventId;

  __declspec(property(put = set_Keywords))::System::Diagnostics::Tracing::EventKeywords Keywords;

  __declspec(property(put = set_Level))::System::Diagnostics::Tracing::EventLevel Level;

  __declspec(property(put = set_Message))::StringW Message;

  /// @brief Field <EventId>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__EventId_k__BackingField, put = __cordl_internal_set__EventId_k__BackingField)) int32_t _EventId_k__BackingField;

  /// @brief Field <Keywords>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Keywords_k__BackingField,
                      put = __cordl_internal_set__Keywords_k__BackingField))::System::Diagnostics::Tracing::EventKeywords _Keywords_k__BackingField;

  /// @brief Field <Level>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__Level_k__BackingField, put = __cordl_internal_set__Level_k__BackingField))::System::Diagnostics::Tracing::EventLevel _Level_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Message_k__BackingField, put = __cordl_internal_set__Message_k__BackingField))::StringW _Message_k__BackingField;

  static inline ::System::Diagnostics::Tracing::EventAttribute* New_ctor(int32_t eventId);

  constexpr int32_t const& __cordl_internal_get__EventId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__EventId_k__BackingField();

  constexpr ::System::Diagnostics::Tracing::EventKeywords const& __cordl_internal_get__Keywords_k__BackingField() const;

  constexpr ::System::Diagnostics::Tracing::EventKeywords& __cordl_internal_get__Keywords_k__BackingField();

  constexpr ::System::Diagnostics::Tracing::EventLevel const& __cordl_internal_get__Level_k__BackingField() const;

  constexpr ::System::Diagnostics::Tracing::EventLevel& __cordl_internal_get__Level_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Message_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Message_k__BackingField();

  constexpr void __cordl_internal_set__EventId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__Keywords_k__BackingField(::System::Diagnostics::Tracing::EventKeywords value);

  constexpr void __cordl_internal_set__Level_k__BackingField(::System::Diagnostics::Tracing::EventLevel value);

  constexpr void __cordl_internal_set__Message_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x28ffae0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t eventId);

  /// @brief Method set_EventId, addr 0x28ffb08, size 0x8, virtual false, abstract: false, final false
  inline void set_EventId(int32_t value);

  /// @brief Method set_Keywords, addr 0x28ffb18, size 0x8, virtual false, abstract: false, final false
  inline void set_Keywords(::System::Diagnostics::Tracing::EventKeywords value);

  /// @brief Method set_Level, addr 0x28ffb10, size 0x8, virtual false, abstract: false, final false
  inline void set_Level(::System::Diagnostics::Tracing::EventLevel value);

  /// @brief Method set_Message, addr 0x28ffb20, size 0x8, virtual false, abstract: false, final false
  inline void set_Message(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventAttribute(EventAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventAttribute(EventAttribute const&) = delete;

  /// @brief Field <EventId>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____EventId_k__BackingField;

  /// @brief Field <Level>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::System::Diagnostics::Tracing::EventLevel ____Level_k__BackingField;

  /// @brief Field <Keywords>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Diagnostics::Tracing::EventKeywords ____Keywords_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Message_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Tracing::EventAttribute, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::Tracing::EventAttribute, ____EventId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Tracing::EventAttribute, ____Level_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Tracing::EventAttribute, ____Keywords_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Tracing::EventAttribute, ____Message_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace System::Diagnostics::Tracing
NEED_NO_BOX(::System::Diagnostics::Tracing::EventAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventAttribute*, "System.Diagnostics.Tracing", "EventAttribute");
