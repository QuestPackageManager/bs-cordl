#pragma once
// IWYU pragma private; include "System/Diagnostics/TraceSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__SourceLevels_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TraceSource)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Specialized {
class StringDictionary;
}
namespace System::Diagnostics {
struct SourceLevels;
}
namespace System::Diagnostics {
class SourceSwitch;
}
namespace System::Diagnostics {
class TraceListenerCollection;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace System::Diagnostics {
class TraceSource;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::TraceSource);
// Dependencies System.Diagnostics.SourceLevels, System.Object
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.TraceSource
class CORDL_TYPE TraceSource : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Listeners)) ::System::Diagnostics::TraceListenerCollection* Listeners;

  __declspec(property(get = get_Switch)) ::System::Diagnostics::SourceSwitch* Switch;

  /// @brief Field _initCalled, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__initCalled, put = __cordl_internal_set__initCalled)) bool _initCalled;

  /// @brief Field attributes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes)) ::System::Collections::Specialized::StringDictionary* attributes;

  /// @brief Field internalSwitch, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_internalSwitch, put = __cordl_internal_set_internalSwitch)) ::System::Diagnostics::SourceSwitch* internalSwitch;

  /// @brief Field listeners, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_listeners, put = __cordl_internal_set_listeners)) ::System::Diagnostics::TraceListenerCollection* listeners;

  /// @brief Field s_LastCollectionCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_LastCollectionCount, put = setStaticF_s_LastCollectionCount)) int32_t s_LastCollectionCount;

  /// @brief Field sourceName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_sourceName, put = __cordl_internal_set_sourceName)) ::StringW sourceName;

  /// @brief Field switchLevel, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_switchLevel, put = __cordl_internal_set_switchLevel)) ::System::Diagnostics::SourceLevels switchLevel;

  /// @brief Field tracesources, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tracesources, put = setStaticF_tracesources)) ::System::Collections::Generic::List_1<::System::WeakReference*>* tracesources;

  /// @brief Method Flush, addr 0x61e5398, size 0x6ec, virtual false, abstract: false, final false
  inline void Flush();

  /// @brief Method Initialize, addr 0x61e5140, size 0xe8, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::System::Diagnostics::TraceSource* New_ctor(::StringW name);

  static inline ::System::Diagnostics::TraceSource* New_ctor(::StringW name, ::System::Diagnostics::SourceLevels defaultLevel);

  /// @brief Method NoConfigInit, addr 0x61e5228, size 0x170, virtual false, abstract: false, final false
  inline void NoConfigInit();

  constexpr bool const& __cordl_internal_get__initCalled() const;

  constexpr bool& __cordl_internal_get__initCalled();

  constexpr ::System::Collections::Specialized::StringDictionary* const& __cordl_internal_get_attributes() const;

  constexpr ::System::Collections::Specialized::StringDictionary*& __cordl_internal_get_attributes();

  constexpr ::System::Diagnostics::SourceSwitch* const& __cordl_internal_get_internalSwitch() const;

  constexpr ::System::Diagnostics::SourceSwitch*& __cordl_internal_get_internalSwitch();

  constexpr ::System::Diagnostics::TraceListenerCollection* const& __cordl_internal_get_listeners() const;

  constexpr ::System::Diagnostics::TraceListenerCollection*& __cordl_internal_get_listeners();

  constexpr ::StringW const& __cordl_internal_get_sourceName() const;

  constexpr ::StringW& __cordl_internal_get_sourceName();

  constexpr ::System::Diagnostics::SourceLevels const& __cordl_internal_get_switchLevel() const;

  constexpr ::System::Diagnostics::SourceLevels& __cordl_internal_get_switchLevel();

  constexpr void __cordl_internal_set__initCalled(bool value);

  constexpr void __cordl_internal_set_attributes(::System::Collections::Specialized::StringDictionary* value);

  constexpr void __cordl_internal_set_internalSwitch(::System::Diagnostics::SourceSwitch* value);

  constexpr void __cordl_internal_set_listeners(::System::Diagnostics::TraceListenerCollection* value);

  constexpr void __cordl_internal_set_sourceName(::StringW value);

  constexpr void __cordl_internal_set_switchLevel(::System::Diagnostics::SourceLevels value);

  /// @brief Method .ctor, addr 0x61e49b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x61e49bc, size 0x278, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Diagnostics::SourceLevels defaultLevel);

  /// @brief Method _pruneCachedTraceSources, addr 0x61e4c34, size 0x50c, virtual false, abstract: false, final false
  static inline void _pruneCachedTraceSources();

  static inline int32_t getStaticF_s_LastCollectionCount();

  static inline ::System::Collections::Generic::List_1<::System::WeakReference*>* getStaticF_tracesources();

  /// @brief Method get_Listeners, addr 0x61e5a84, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Diagnostics::TraceListenerCollection* get_Listeners();

  /// @brief Method get_Switch, addr 0x61e5aa0, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Diagnostics::SourceSwitch* get_Switch();

  static inline void setStaticF_s_LastCollectionCount(int32_t value);

  static inline void setStaticF_tracesources(::System::Collections::Generic::List_1<::System::WeakReference*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TraceSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceSource(TraceSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceSource(TraceSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11118 };

  /// @brief Field internalSwitch, offset: 0x10, size: 0x8, def value: None
  ::System::Diagnostics::SourceSwitch* ___internalSwitch;

  /// @brief Field listeners, offset: 0x18, size: 0x8, def value: None
  ::System::Diagnostics::TraceListenerCollection* ___listeners;

  /// @brief Field attributes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Specialized::StringDictionary* ___attributes;

  /// @brief Field switchLevel, offset: 0x28, size: 0x4, def value: None
  ::System::Diagnostics::SourceLevels ___switchLevel;

  /// @brief Field sourceName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___sourceName;

  /// @brief Field _initCalled, offset: 0x38, size: 0x1, def value: None
  bool ____initCalled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::TraceSource, ___internalSwitch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceSource, ___listeners) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceSource, ___attributes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceSource, ___switchLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceSource, ___sourceName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceSource, ____initCalled) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::TraceSource, 0x40>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::TraceSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceSource*, "System.Diagnostics", "TraceSource");
