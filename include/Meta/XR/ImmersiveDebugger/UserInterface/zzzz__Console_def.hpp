#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Console.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__DebugPanel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Console)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Background;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ButtonWithIcon;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Flex;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ImageStyle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Label;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
template <typename ControllerType, typename ProxyControllerType> class ProxyFlex_2;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ScrollView;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Toggle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class ConsoleLine;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class Console___c__DisplayClass47_0;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class LogEntry;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class ProxyConsoleLine;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class SeverityEntry;
}
namespace Meta::XR::ImmersiveDebugger {
struct RuntimeSettings_DistanceOption;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class Console;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class Console___c__DisplayClass47_0;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Console);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Console/<>c__DisplayClass47_0
class CORDL_TYPE Console___c__DisplayClass47_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field logEntry, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_logEntry, put = __cordl_internal_set_logEntry)) ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* logEntry;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0* New_ctor();

  /// @brief Method <RemoveLogEntry>b__0, addr 0x589d0f4, size 0x70, virtual false, abstract: false, final false
  inline bool _RemoveLogEntry_b__0(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* entry);

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* const& __cordl_internal_get_logEntry() const;

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*& __cordl_internal_get_logEntry();

  constexpr void __cordl_internal_set_logEntry(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* value);

  /// @brief Method .ctor, addr 0x589c3f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Console___c__DisplayClass47_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Console___c__DisplayClass47_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Console___c__DisplayClass47_0(Console___c__DisplayClass47_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Console___c__DisplayClass47_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Console___c__DisplayClass47_0(Console___c__DisplayClass47_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18326 };

  /// @brief Field logEntry, offset: 0x10, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* ___logEntry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0, ___logEntry) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0, 0x18>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.DebugPanel, UnityEngine.Vector3
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Console
class CORDL_TYPE Console : public ::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel {
public:
  // Declarations
  using __c__DisplayClass47_0 = ::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0;

  __declspec(property(get = get_Dirty, put = set_Dirty)) bool Dirty;

  __declspec(property(get = get_LogCollapseMode, put = set_LogCollapseMode)) bool LogCollapseMode;

  __declspec(property(put = set_LogDetailBackgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> LogDetailBackgroundStyle;

  __declspec(property(get = get_MaximumNumberOfLogEntries, put = set_MaximumNumberOfLogEntries)) int32_t MaximumNumberOfLogEntries;

  /// @brief Field <Dirty>k__BackingField, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get__Dirty_k__BackingField, put = __cordl_internal_set__Dirty_k__BackingField)) bool _Dirty_k__BackingField;

  /// @brief Field <LogCollapseMode>k__BackingField, offset 0x190, size 0x1
  __declspec(property(get = __cordl_internal_get__LogCollapseMode_k__BackingField, put = __cordl_internal_set__LogCollapseMode_k__BackingField)) bool _LogCollapseMode_k__BackingField;

  /// @brief Field <MaximumNumberOfLogEntries>k__BackingField, offset 0x194, size 0x4
  __declspec(property(get = __cordl_internal_get__MaximumNumberOfLogEntries_k__BackingField,
                      put = __cordl_internal_set__MaximumNumberOfLogEntries_k__BackingField)) int32_t _MaximumNumberOfLogEntries_k__BackingField;

  /// @brief Field _allEntries, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__allEntries,
                      put = __cordl_internal_set__allEntries)) ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* _allEntries;

  /// @brief Field _buttonsAnchor, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonsAnchor, put = __cordl_internal_set__buttonsAnchor)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> _buttonsAnchor;

  /// @brief Field _collapseActiveIcon, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__collapseActiveIcon, put = __cordl_internal_set__collapseActiveIcon)) ::UnityW<::UnityEngine::Texture2D> _collapseActiveIcon;

  /// @brief Field _collapseBtn, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__collapseBtn, put = __cordl_internal_set__collapseBtn)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> _collapseBtn;

  /// @brief Field _collapseInactiveIcon, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__collapseInactiveIcon, put = __cordl_internal_set__collapseInactiveIcon)) ::UnityW<::UnityEngine::Texture2D> _collapseInactiveIcon;

  /// @brief Field _currentPosition, offset 0x160, size 0xc
  __declspec(property(get = __cordl_internal_get__currentPosition, put = __cordl_internal_set__currentPosition)) ::UnityEngine::Vector3 _currentPosition;

  /// @brief Field _entries, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__entries,
                      put = __cordl_internal_set__entries)) ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* _entries;

  /// @brief Field _entryMap, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__entryMap,
                      put = __cordl_internal_set__entryMap)) ::System::Collections::Generic::Dictionary_2<int32_t, ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* _entryMap;

  /// @brief Field _flex, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__flex, put = __cordl_internal_set__flex)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> _flex;

  /// @brief Field _lerpCompleted, offset 0x17c, size 0x1
  __declspec(property(get = __cordl_internal_get__lerpCompleted, put = __cordl_internal_set__lerpCompleted)) bool _lerpCompleted;

  /// @brief Field _lerpSpeed, offset 0x178, size 0x4
  __declspec(property(get = __cordl_internal_get__lerpSpeed, put = __cordl_internal_set__lerpSpeed)) float_t _lerpSpeed;

  /// @brief Field _logDetailLabel, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__logDetailLabel, put = __cordl_internal_set__logDetailLabel)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> _logDetailLabel;

  /// @brief Field _logDetailPaneBackground, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get__logDetailPaneBackground,
                      put = __cordl_internal_set__logDetailPaneBackground)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>
      _logDetailPaneBackground;

  /// @brief Field _logDetailPaneBackgroundImageStyle, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__logDetailPaneBackgroundImageStyle,
                      put = __cordl_internal_set__logDetailPaneBackgroundImageStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>
      _logDetailPaneBackgroundImageStyle;

  /// @brief Field _logDetailPaneCloseBtn, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get__logDetailPaneCloseBtn,
                      put = __cordl_internal_set__logDetailPaneCloseBtn)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon>
      _logDetailPaneCloseBtn;

  /// @brief Field _proxyFlex, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__proxyFlex, put = __cordl_internal_set__proxyFlex)) ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<
      ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine>, ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>* _proxyFlex;

  /// @brief Field _scrollView, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__scrollView, put = __cordl_internal_set__scrollView)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> _scrollView;

  /// @brief Field _scrollViewLogDetails, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__scrollViewLogDetails, put = __cordl_internal_set__scrollViewLogDetails)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView>
      _scrollViewLogDetails;

  /// @brief Field _severities, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__severities,
                      put = __cordl_internal_set__severities)) ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>* _severities;

  /// @brief Field _severitiesPerType, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__severitiesPerType,
                      put = __cordl_internal_set__severitiesPerType)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::LogType,
                                                                                                                   ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>* _severitiesPerType;

  /// @brief Field _targetPosition, offset 0x16c, size 0xc
  __declspec(property(get = __cordl_internal_get__targetPosition, put = __cordl_internal_set__targetPosition)) ::UnityEngine::Vector3 _targetPosition;

  /// @brief Method AppendToProxyFlex, addr 0x589c368, size 0x8c, virtual false, abstract: false, final false
  inline void AppendToProxyFlex(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* entry);

  /// @brief Method Clear, addr 0x589c7d4, size 0x2a4, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ComputeLogHash, addr 0x589c0c8, size 0xe8, virtual false, abstract: false, final false
  static inline int32_t ComputeLogHash(::StringW content, ::StringW stackTrace);

  /// @brief Method EnqueueLogEntry, addr 0x589bdac, size 0x31c, virtual false, abstract: false, final false
  inline void EnqueueLogEntry(::StringW logString, ::StringW stackTrace, ::UnityEngine::LogType type);

  /// @brief Method FlattenEntries, addr 0x589bbb8, size 0x1f4, virtual false, abstract: false, final false
  inline void FlattenEntries();

  /// @brief Method GetSeverity, addr 0x5899c90, size 0x7c, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* GetSeverity(::UnityEngine::LogType logType);

  /// @brief Method HideLogDetailsPanel, addr 0x589b374, size 0x84, virtual false, abstract: false, final false
  inline void HideLogDetailsPanel();

  /// @brief Method MergeEntries, addr 0x589b8c4, size 0x2f4, virtual false, abstract: false, final false
  inline void MergeEntries();

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Console* New_ctor();

  /// @brief Method OnConsoleLineClicked, addr 0x589cba8, size 0x100, virtual false, abstract: false, final false
  inline void OnConsoleLineClicked(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* entry);

  /// @brief Method OnDisable, addr 0x589b5c0, size 0x11c, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x589b3f8, size 0x1c8, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnTransparencyChanged, addr 0x589b6dc, size 0x80, virtual true, abstract: false, final false
  inline void OnTransparencyChanged();

  /// @brief Method RefreshAllEntries, addr 0x589c4ec, size 0x1bc, virtual false, abstract: false, final false
  inline void RefreshAllEntries();

  /// @brief Method RegisterControl, addr 0x589afa0, size 0x224, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> RegisterControl(::StringW buttonName, ::UnityEngine::Texture2D* icon,
                                                                                                 ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* style, ::System::Action* callback);

  /// @brief Method RegisterCount, addr 0x589b75c, size 0x100, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> RegisterCount();

  /// @brief Method RemoveLogEntry, addr 0x589c1b0, size 0x14c, virtual false, abstract: false, final false
  inline void RemoveLogEntry(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* logEntry);

  /// @brief Method ResetLogCount, addr 0x589caa8, size 0x100, virtual false, abstract: false, final false
  inline void ResetLogCount();

  /// @brief Method SetPanelPosition, addr 0x589cdb8, size 0x144, virtual false, abstract: false, final false
  inline void SetPanelPosition(::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption distanceOption, bool skipAnimation);

  /// @brief Method Setup, addr 0x5899dc8, size 0xe8c, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  /// @brief Method ShowLogDetailsPanel, addr 0x589cca8, size 0x90, virtual false, abstract: false, final false
  inline void ShowLogDetailsPanel();

  /// @brief Method ToggleCollapseMode, addr 0x589b85c, size 0x68, virtual false, abstract: false, final false
  inline void ToggleCollapseMode();

  /// @brief Method Update, addr 0x589c3f8, size 0xf4, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get__Dirty_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Dirty_k__BackingField();

  constexpr bool const& __cordl_internal_get__LogCollapseMode_k__BackingField() const;

  constexpr bool& __cordl_internal_get__LogCollapseMode_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__MaximumNumberOfLogEntries_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__MaximumNumberOfLogEntries_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* const& __cordl_internal_get__allEntries() const;

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>*& __cordl_internal_get__allEntries();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& __cordl_internal_get__buttonsAnchor() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& __cordl_internal_get__buttonsAnchor();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__collapseActiveIcon() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__collapseActiveIcon();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> const& __cordl_internal_get__collapseBtn() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>& __cordl_internal_get__collapseBtn();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__collapseInactiveIcon() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__collapseInactiveIcon();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__currentPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__currentPosition();

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* const& __cordl_internal_get__entries() const;

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>*& __cordl_internal_get__entries();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* const& __cordl_internal_get__entryMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>*& __cordl_internal_get__entryMap();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& __cordl_internal_get__flex() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& __cordl_internal_get__flex();

  constexpr bool const& __cordl_internal_get__lerpCompleted() const;

  constexpr bool& __cordl_internal_get__lerpCompleted();

  constexpr float_t const& __cordl_internal_get__lerpSpeed() const;

  constexpr float_t& __cordl_internal_get__lerpSpeed();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& __cordl_internal_get__logDetailLabel() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& __cordl_internal_get__logDetailLabel();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& __cordl_internal_get__logDetailPaneBackground() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& __cordl_internal_get__logDetailPaneBackground();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const& __cordl_internal_get__logDetailPaneBackgroundImageStyle() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& __cordl_internal_get__logDetailPaneBackgroundImageStyle();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon> const& __cordl_internal_get__logDetailPaneCloseBtn() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon>& __cordl_internal_get__logDetailPaneCloseBtn();

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine>,
                                                                               ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>* const&
  __cordl_internal_get__proxyFlex() const;

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine>,
                                                                               ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>*&
  __cordl_internal_get__proxyFlex();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> const& __cordl_internal_get__scrollView() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView>& __cordl_internal_get__scrollView();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> const& __cordl_internal_get__scrollViewLogDetails() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView>& __cordl_internal_get__scrollViewLogDetails();

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>* const& __cordl_internal_get__severities() const;

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>*& __cordl_internal_get__severities();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::LogType, ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>* const& __cordl_internal_get__severitiesPerType() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::LogType, ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>*& __cordl_internal_get__severitiesPerType();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetPosition();

  constexpr void __cordl_internal_set__Dirty_k__BackingField(bool value);

  constexpr void __cordl_internal_set__LogCollapseMode_k__BackingField(bool value);

  constexpr void __cordl_internal_set__MaximumNumberOfLogEntries_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__allEntries(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* value);

  constexpr void __cordl_internal_set__buttonsAnchor(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value);

  constexpr void __cordl_internal_set__collapseActiveIcon(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__collapseBtn(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> value);

  constexpr void __cordl_internal_set__collapseInactiveIcon(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__currentPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__entries(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* value);

  constexpr void __cordl_internal_set__entryMap(::System::Collections::Generic::Dictionary_2<int32_t, ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* value);

  constexpr void __cordl_internal_set__flex(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value);

  constexpr void __cordl_internal_set__lerpCompleted(bool value);

  constexpr void __cordl_internal_set__lerpSpeed(float_t value);

  constexpr void __cordl_internal_set__logDetailLabel(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value);

  constexpr void __cordl_internal_set__logDetailPaneBackground(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value);

  constexpr void __cordl_internal_set__logDetailPaneBackgroundImageStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value);

  constexpr void __cordl_internal_set__logDetailPaneCloseBtn(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon> value);

  constexpr void __cordl_internal_set__proxyFlex(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine>,
                                                                                                                    ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>* value);

  constexpr void __cordl_internal_set__scrollView(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> value);

  constexpr void __cordl_internal_set__scrollViewLogDetails(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> value);

  constexpr void __cordl_internal_set__severities(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>* value);

  constexpr void __cordl_internal_set__severitiesPerType(::System::Collections::Generic::Dictionary_2<::UnityEngine::LogType, ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>* value);

  constexpr void __cordl_internal_set__targetPosition(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x589cefc, size 0x1dc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Dirty, addr 0x5899c80, size 0x8, virtual false, abstract: false, final false
  inline bool get_Dirty();

  /// @brief Method get_LogCollapseMode, addr 0x5899d0c, size 0x8, virtual false, abstract: false, final false
  inline bool get_LogCollapseMode();

  /// @brief Method get_MaximumNumberOfLogEntries, addr 0x5899d1c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaximumNumberOfLogEntries();

  /// @brief Method set_Dirty, addr 0x5899c88, size 0x8, virtual false, abstract: false, final false
  inline void set_Dirty(bool value);

  /// @brief Method set_LogCollapseMode, addr 0x5899d14, size 0x8, virtual false, abstract: false, final false
  inline void set_LogCollapseMode(bool value);

  /// @brief Method set_LogDetailBackgroundStyle, addr 0x5899d2c, size 0x9c, virtual false, abstract: false, final false
  inline void set_LogDetailBackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value);

  /// @brief Method set_MaximumNumberOfLogEntries, addr 0x5899d24, size 0x8, virtual false, abstract: false, final false
  inline void set_MaximumNumberOfLogEntries(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Console();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Console", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Console(Console&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Console", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Console(Console const&) = delete;

  /// @brief Field ContractedLogPanelBottomMargin offset 0xffffffff size 0x4
  static constexpr int32_t ContractedLogPanelBottomMargin{ static_cast<int32_t>(0x8c) };

  /// @brief Field FullLogPanelBottomMargin offset 0xffffffff size 0x4
  static constexpr int32_t FullLogPanelBottomMargin{ static_cast<int32_t>(0x28) };

  /// @brief Field NumberOfLines offset 0xffffffff size 0x4
  static constexpr int32_t NumberOfLines{ static_cast<int32_t>(0xe) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18327 };

  /// @brief Field <Dirty>k__BackingField, offset: 0xe0, size: 0x1, def value: None
  bool ____Dirty_k__BackingField;

  /// @brief Field _scrollView, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> ____scrollView;

  /// @brief Field _scrollViewLogDetails, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> ____scrollViewLogDetails;

  /// @brief Field _proxyFlex, offset: 0xf8, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine>,
                                                                     ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>* ____proxyFlex;

  /// @brief Field _flex, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> ____flex;

  /// @brief Field _buttonsAnchor, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> ____buttonsAnchor;

  /// @brief Field _severities, offset: 0x110, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>* ____severities;

  /// @brief Field _severitiesPerType, offset: 0x118, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::LogType, ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>* ____severitiesPerType;

  /// @brief Field _entries, offset: 0x120, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* ____entries;

  /// @brief Field _allEntries, offset: 0x128, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* ____allEntries;

  /// @brief Field _entryMap, offset: 0x130, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* ____entryMap;

  /// @brief Field _logDetailLabel, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> ____logDetailLabel;

  /// @brief Field _collapseBtn, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> ____collapseBtn;

  /// @brief Field _collapseActiveIcon, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____collapseActiveIcon;

  /// @brief Field _collapseInactiveIcon, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____collapseInactiveIcon;

  /// @brief Field _logDetailPaneCloseBtn, offset: 0x158, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon> ____logDetailPaneCloseBtn;

  /// @brief Field _currentPosition, offset: 0x160, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____currentPosition;

  /// @brief Field _targetPosition, offset: 0x16c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____targetPosition;

  /// @brief Field _lerpSpeed, offset: 0x178, size: 0x4, def value: None
  float_t ____lerpSpeed;

  /// @brief Field _lerpCompleted, offset: 0x17c, size: 0x1, def value: None
  bool ____lerpCompleted;

  /// @brief Field _logDetailPaneBackground, offset: 0x180, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> ____logDetailPaneBackground;

  /// @brief Field _logDetailPaneBackgroundImageStyle, offset: 0x188, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> ____logDetailPaneBackgroundImageStyle;

  /// @brief Field <LogCollapseMode>k__BackingField, offset: 0x190, size: 0x1, def value: None
  bool ____LogCollapseMode_k__BackingField;

  /// @brief Field <MaximumNumberOfLogEntries>k__BackingField, offset: 0x194, size: 0x4, def value: None
  int32_t ____MaximumNumberOfLogEntries_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____Dirty_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____scrollView) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____scrollViewLogDetails) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____proxyFlex) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____flex) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____buttonsAnchor) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____severities) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____severitiesPerType) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____entries) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____allEntries) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____entryMap) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____logDetailLabel) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____collapseBtn) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____collapseActiveIcon) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____collapseInactiveIcon) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____logDetailPaneCloseBtn) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____currentPosition) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____targetPosition) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____lerpSpeed) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____lerpCompleted) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____logDetailPaneBackground) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____logDetailPaneBackgroundImageStyle) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____LogCollapseMode_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Console, ____MaximumNumberOfLogEntries_k__BackingField) == 0x194, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Console, 0x198>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Console);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Console*, "Meta.XR.ImmersiveDebugger.UserInterface", "Console");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0*, "Meta.XR.ImmersiveDebugger.UserInterface", "Console/<>c__DisplayClass47_0");
