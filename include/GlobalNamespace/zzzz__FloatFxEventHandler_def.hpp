#pragma once
// IWYU pragma private; include "GlobalNamespace\FloatFxEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatFxEventHandler)
namespace GlobalNamespace {
class FloatFxBeatmapEventData;
}
namespace GlobalNamespace {
class FloatFxEventHandler_InitData;
}
namespace System {
template <typename T> class Action_1;
}
namespace Tweening {
class FloatTween;
}
namespace Tweening {
class SongTimeTweeningManager;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxEventHandler;
}
namespace GlobalNamespace {
class FloatFxEventHandler_InitData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FloatFxEventHandler*);
MARK_REF_T(::GlobalNamespace::FloatFxEventHandler_InitData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FloatFxEventHandler*, "", "FloatFxEventHandler");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FloatFxEventHandler_InitData*, "", "FloatFxEventHandler/InitData");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatFxEventHandler/InitData
class CORDL_TYPE FloatFxEventHandler_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field setValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_setValue, put = __cordl_internal_set_setValue)) ::System::Action_1<float_t>* setValue;

  /// @brief Field tweeningManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tweeningManager, put = __cordl_internal_set_tweeningManager)) ::UnityW<::Tweening::SongTimeTweeningManager> tweeningManager;

  static inline ::GlobalNamespace::FloatFxEventHandler_InitData* New_ctor(::Tweening::SongTimeTweeningManager* tweeningManager, ::System::Action_1<float_t>* setValue);

  constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_setValue() const;

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_setValue();

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& __cordl_internal_get_tweeningManager() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& __cordl_internal_get_tweeningManager();

  constexpr void __cordl_internal_set_setValue(::System::Action_1<float_t>* value);

  constexpr void __cordl_internal_set_tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x59915d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Tweening::SongTimeTweeningManager* tweeningManager, ::System::Action_1<float_t>* setValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxEventHandler_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxEventHandler_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxEventHandler_InitData(FloatFxEventHandler_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxEventHandler_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxEventHandler_InitData(FloatFxEventHandler_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5835 };

  /// @brief Field tweeningManager, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::Tweening::SongTimeTweeningManager> ___tweeningManager;

  /// @brief Field setValue, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___setValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatFxEventHandler_InitData, ___tweeningManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxEventHandler_InitData, ___setValue) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FloatFxEventHandler_InitData) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatFxEventHandler
class CORDL_TYPE FloatFxEventHandler : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::FloatFxEventHandler_InitData;

  /// @brief Field _floatTween, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__floatTween, put = __cordl_internal_set__floatTween)) ::Tweening::FloatTween* _floatTween;

  /// @brief Field _setValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__setValue, put = __cordl_internal_set__setValue)) ::System::Action_1<float_t>* _setValue;

  /// @brief Field _tweeningManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::SongTimeTweeningManager> _tweeningManager;

  /// @brief Method Cleanup, addr 0x598f778, size 0x8c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method HandleFloatFxEvent, addr 0x59922b4, size 0xb8, virtual false, abstract: false, final false
  inline void HandleFloatFxEvent(::GlobalNamespace::FloatFxBeatmapEventData* currentEventData);

  static inline ::GlobalNamespace::FloatFxEventHandler* New_ctor(::GlobalNamespace::FloatFxEventHandler_InitData* initData);

  constexpr ::Tweening::FloatTween* const& __cordl_internal_get__floatTween() const;

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__floatTween();

  constexpr ::System::Action_1<float_t>* const& __cordl_internal_get__setValue() const;

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get__setValue();

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr void __cordl_internal_set__floatTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__setValue(::System::Action_1<float_t>* value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x59915dc, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::FloatFxEventHandler_InitData* initData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxEventHandler(FloatFxEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxEventHandler(FloatFxEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5836 };

  /// @brief Field _tweeningManager, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::Tweening::SongTimeTweeningManager> ____tweeningManager;

  /// @brief Field _setValue, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<float_t>* ____setValue;

  /// @brief Field _floatTween, offset: 0x20, size: 0x8, def value: None
  ::Tweening::FloatTween* ____floatTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatFxEventHandler, ____tweeningManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxEventHandler, ____setValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxEventHandler, ____floatTween) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FloatFxEventHandler) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
