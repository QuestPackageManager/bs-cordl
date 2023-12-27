#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SaberManager)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
class __SaberManager__InitData;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class Saber;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15036)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5295))
// CS Name: ::SaberManager::InitData*
class CORDL_TYPE __SaberManager__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field oneSaberMode, offset 0x10, size 0x1
  __declspec(property(get = __get_oneSaberMode, put = __set_oneSaberMode)) bool oneSaberMode;

  /// @brief Field oneSaberType, offset 0x14, size 0x4
  __declspec(property(get = __get_oneSaberType, put = __set_oneSaberType))::GlobalNamespace::SaberType oneSaberType;

  constexpr bool& __get_oneSaberMode();

  constexpr bool const& __get_oneSaberMode() const;

  constexpr void __set_oneSaberMode(bool value);

  constexpr ::GlobalNamespace::SaberType& __get_oneSaberType();

  constexpr ::GlobalNamespace::SaberType const& __get_oneSaberType() const;

  constexpr void __set_oneSaberType(::GlobalNamespace::SaberType value);

  static inline ::GlobalNamespace::__SaberManager__InitData* New_ctor(bool oneSaberMode, ::GlobalNamespace::SaberType oneSaberType);

  /// @brief Method .ctor addr 0x22640f8 size 0x30 virtual false final false
  inline void _ctor(bool oneSaberMode, ::GlobalNamespace::SaberType oneSaberType);

  // Ctor Parameters [CppParam { name: "", ty: "__SaberManager__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SaberManager__InitData(__SaberManager__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SaberManager__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SaberManager__InitData(__SaberManager__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SaberManager__InitData();

public:
  /// @brief Field oneSaberMode, offset: 0x10, size: 0x1, def value: None
  bool ___oneSaberMode;

  /// @brief Field oneSaberType, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::SaberType ___oneSaberType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SaberManager__InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SaberManager
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5296))
// CS Name: ::SaberManager*
class CORDL_TYPE SaberManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__SaberManager__InitData;

  /// @brief Field _leftSaber, offset 0x18, size 0x8
  __declspec(property(get = __get__leftSaber, put = __set__leftSaber))::GlobalNamespace::Saber* _leftSaber;

  /// @brief Field _rightSaber, offset 0x20, size 0x8
  __declspec(property(get = __get__rightSaber, put = __set__rightSaber))::GlobalNamespace::Saber* _rightSaber;

  /// @brief Field _initData, offset 0x28, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__SaberManager__InitData* _initData;

  /// @brief Field _started, offset 0x30, size 0x1
  __declspec(property(get = __get__started, put = __set__started)) bool _started;

  /// @brief Field didUpdateSaberPositionsEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_didUpdateSaberPositionsEvent,
                      put = __set_didUpdateSaberPositionsEvent))::System::Action_2<::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*>* didUpdateSaberPositionsEvent;

  __declspec(property(get = get_leftSaber))::GlobalNamespace::Saber* leftSaber;

  __declspec(property(get = get_rightSaber))::GlobalNamespace::Saber* rightSaber;

  __declspec(property(put = set_disableSabers)) bool disableSabers;

  constexpr ::GlobalNamespace::Saber*& __get__leftSaber();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> const& __get__leftSaber() const;

  constexpr void __set__leftSaber(::GlobalNamespace::Saber* value);

  constexpr ::GlobalNamespace::Saber*& __get__rightSaber();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> const& __get__rightSaber() const;

  constexpr void __set__rightSaber(::GlobalNamespace::Saber* value);

  constexpr ::GlobalNamespace::__SaberManager__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SaberManager__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__SaberManager__InitData* value);

  constexpr bool& __get__started();

  constexpr bool const& __get__started() const;

  constexpr void __set__started(bool value);

  constexpr ::System::Action_2<::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*>*& __get_didUpdateSaberPositionsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*>*> const& __get_didUpdateSaberPositionsEvent() const;

  constexpr void __set_didUpdateSaberPositionsEvent(::System::Action_2<::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*>* value);

  /// @brief Method get_leftSaber addr 0x2263e98 size 0x8 virtual false final false
  inline ::GlobalNamespace::Saber* get_leftSaber();

  /// @brief Method get_rightSaber addr 0x2263ea0 size 0x8 virtual false final false
  inline ::GlobalNamespace::Saber* get_rightSaber();

  /// @brief Method add_didUpdateSaberPositionsEvent addr 0x2262830 size 0xb0 virtual false final false
  inline void add_didUpdateSaberPositionsEvent(::System::Action_2<::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*>* value);

  /// @brief Method remove_didUpdateSaberPositionsEvent addr 0x2262968 size 0xb0 virtual false final false
  inline void remove_didUpdateSaberPositionsEvent(::System::Action_2<::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*>* value);

  /// @brief Method set_disableSabers addr 0x2263ea8 size 0x10 virtual false final false
  inline void set_disableSabers(bool value);

  /// @brief Method Start addr 0x2263eb8 size 0x1c virtual false final false
  inline void Start();

  /// @brief Method OnDisable addr 0x2263ff8 size 0x4 virtual false final false
  inline void OnDisable();

  /// @brief Method OnEnable addr 0x2263ffc size 0x10 virtual false final false
  inline void OnEnable();

  /// @brief Method Update addr 0x226400c size 0x94 virtual false final false
  inline void Update();

  /// @brief Method SaberForType addr 0x22640a0 size 0x50 virtual false final false
  inline ::GlobalNamespace::Saber* SaberForType(::GlobalNamespace::SaberType saberType);

  /// @brief Method RefreshSabers addr 0x2263ed4 size 0x124 virtual false final false
  inline void RefreshSabers();

  static inline ::GlobalNamespace::SaberManager* New_ctor();

  /// @brief Method .ctor addr 0x22640f0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SaberManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberManager(SaberManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberManager(SaberManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberManager();

public:
  /// @brief Field _leftSaber, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::Saber* ____leftSaber;

  /// @brief Field _rightSaber, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::Saber* ____rightSaber;

  /// @brief Field _initData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__SaberManager__InitData* ____initData;

  /// @brief Field _started, offset: 0x30, size: 0x1, def value: None
  bool ____started;

  /// @brief Field didUpdateSaberPositionsEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*>* ___didUpdateSaberPositionsEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberManager, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberManager*, "", "SaberManager");
NEED_NO_BOX(::GlobalNamespace::__SaberManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SaberManager__InitData*, "", "SaberManager/InitData");
