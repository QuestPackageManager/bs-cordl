#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SaberManager)
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class __SaberManager__InitData;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class __SaberManager__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberManager);
MARK_REF_PTR_T(::GlobalNamespace::__SaberManager__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SaberManager::InitData*
class CORDL_TYPE __SaberManager__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field oneSaberMode, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_oneSaberMode, put = __cordl_internal_set_oneSaberMode)) bool oneSaberMode;

  /// @brief Field oneSaberType, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_oneSaberType, put = __cordl_internal_set_oneSaberType))::GlobalNamespace::SaberType oneSaberType;

  static inline ::GlobalNamespace::__SaberManager__InitData* New_ctor(bool oneSaberMode, ::GlobalNamespace::SaberType oneSaberType);

  constexpr bool const& __cordl_internal_get_oneSaberMode() const;

  constexpr bool& __cordl_internal_get_oneSaberMode();

  constexpr ::GlobalNamespace::SaberType const& __cordl_internal_get_oneSaberType() const;

  constexpr ::GlobalNamespace::SaberType& __cordl_internal_get_oneSaberType();

  constexpr void __cordl_internal_set_oneSaberMode(bool value);

  constexpr void __cordl_internal_set_oneSaberType(::GlobalNamespace::SaberType value);

  /// @brief Method .ctor, addr 0x261f278, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool oneSaberMode, ::GlobalNamespace::SaberType oneSaberType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SaberManager__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SaberManager__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SaberManager__InitData(__SaberManager__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SaberManager__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SaberManager__InitData(__SaberManager__InitData const&) = delete;

  /// @brief Field oneSaberMode, offset: 0x10, size: 0x1, def value: None
  bool ___oneSaberMode;

  /// @brief Field oneSaberType, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::SaberType ___oneSaberType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SaberManager__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SaberManager__InitData, ___oneSaberMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SaberManager__InitData, ___oneSaberType) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SaberManager
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SaberManager*
class CORDL_TYPE SaberManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__SaberManager__InitData;

  /// @brief Field _initData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__SaberManager__InitData* _initData;

  /// @brief Field _leftSaber, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__leftSaber, put = __cordl_internal_set__leftSaber))::UnityW<::GlobalNamespace::Saber> _leftSaber;

  /// @brief Field _rightSaber, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rightSaber, put = __cordl_internal_set__rightSaber))::UnityW<::GlobalNamespace::Saber> _rightSaber;

  /// @brief Field _started, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__started, put = __cordl_internal_set__started)) bool _started;

  /// @brief Field didUpdateSaberPositionsEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_didUpdateSaberPositionsEvent,
                      put = __cordl_internal_set_didUpdateSaberPositionsEvent))::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* didUpdateSaberPositionsEvent;

  __declspec(property(put = set_disableSabers)) bool disableSabers;

  __declspec(property(get = get_leftSaber))::UnityW<::GlobalNamespace::Saber> leftSaber;

  __declspec(property(get = get_rightSaber))::UnityW<::GlobalNamespace::Saber> rightSaber;

  static inline ::GlobalNamespace::SaberManager* New_ctor();

  /// @brief Method OnDisable, addr 0x261f178, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x261f17c, size 0x10, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RefreshSabers, addr 0x261f054, size 0x124, virtual false, abstract: false, final false
  inline void RefreshSabers();

  /// @brief Method SaberForType, addr 0x261f220, size 0x50, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::Saber> SaberForType(::GlobalNamespace::SaberType saberType);

  /// @brief Method Start, addr 0x261f038, size 0x1c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x261f18c, size 0x94, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::__SaberManager__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SaberManager__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::UnityW<::GlobalNamespace::Saber> const& __cordl_internal_get__leftSaber() const;

  constexpr ::UnityW<::GlobalNamespace::Saber>& __cordl_internal_get__leftSaber();

  constexpr ::UnityW<::GlobalNamespace::Saber> const& __cordl_internal_get__rightSaber() const;

  constexpr ::UnityW<::GlobalNamespace::Saber>& __cordl_internal_get__rightSaber();

  constexpr bool const& __cordl_internal_get__started() const;

  constexpr bool& __cordl_internal_get__started();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*& __cordl_internal_get_didUpdateSaberPositionsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*> const&
  __cordl_internal_get_didUpdateSaberPositionsEvent() const;

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__SaberManager__InitData* value);

  constexpr void __cordl_internal_set__leftSaber(::UnityW<::GlobalNamespace::Saber> value);

  constexpr void __cordl_internal_set__rightSaber(::UnityW<::GlobalNamespace::Saber> value);

  constexpr void __cordl_internal_set__started(bool value);

  constexpr void __cordl_internal_set_didUpdateSaberPositionsEvent(::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* value);

  /// @brief Method .ctor, addr 0x261f270, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didUpdateSaberPositionsEvent, addr 0x261d6b4, size 0xb0, virtual false, abstract: false, final false
  inline void add_didUpdateSaberPositionsEvent(::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* value);

  /// @brief Method get_leftSaber, addr 0x261f018, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::Saber> get_leftSaber();

  /// @brief Method get_rightSaber, addr 0x261f020, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::Saber> get_rightSaber();

  /// @brief Method remove_didUpdateSaberPositionsEvent, addr 0x261d7ec, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didUpdateSaberPositionsEvent(::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* value);

  /// @brief Method set_disableSabers, addr 0x261f028, size 0x10, virtual false, abstract: false, final false
  inline void set_disableSabers(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaberManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberManager(SaberManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberManager(SaberManager const&) = delete;

  /// @brief Field _leftSaber, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Saber> ____leftSaber;

  /// @brief Field _rightSaber, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Saber> ____rightSaber;

  /// @brief Field _initData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__SaberManager__InitData* ____initData;

  /// @brief Field _started, offset: 0x30, size: 0x1, def value: None
  bool ____started;

  /// @brief Field didUpdateSaberPositionsEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* ___didUpdateSaberPositionsEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberManager, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberManager, ____leftSaber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberManager, ____rightSaber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberManager, ____initData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberManager, ____started) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberManager, ___didUpdateSaberPositionsEvent) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberManager*, "", "SaberManager");
NEED_NO_BOX(::GlobalNamespace::__SaberManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SaberManager__InitData*, "", "SaberManager/InitData");
