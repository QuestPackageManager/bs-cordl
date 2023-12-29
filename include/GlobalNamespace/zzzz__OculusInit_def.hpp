#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OculusInit)
namespace GlobalNamespace {
class __OculusInit____c;
}
namespace GlobalNamespace {
class OculusDeeplinkManager;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace Oculus::Platform {
class __Message__Callback;
}
namespace Oculus::Platform {
class Message;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusInit;
}
namespace GlobalNamespace {
class __OculusInit____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusInit);
MARK_REF_PTR_T(::GlobalNamespace::__OculusInit____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4023))
// CS Name: ::OculusInit::<>c*
class CORDL_TYPE __OculusInit____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__OculusInit____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::Oculus::Platform::__Message__Callback* __9__6_0;

  static inline void setStaticF___9(::GlobalNamespace::__OculusInit____c* value);

  static inline ::GlobalNamespace::__OculusInit____c* getStaticF___9();

  static inline void setStaticF___9__6_0(::Oculus::Platform::__Message__Callback* value);

  static inline ::Oculus::Platform::__Message__Callback* getStaticF___9__6_0();

  static inline ::GlobalNamespace::__OculusInit____c* New_ctor();

  /// @brief Method .ctor addr 0x20c89d4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <InitCallback>b__6_0 addr 0x20c89dc size 0xe4 virtual false final false
  inline void _InitCallback_b__6_0(::Oculus::Platform::Message* message);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusInit____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusInit____c(__OculusInit____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusInit____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusInit____c(__OculusInit____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusInit____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusInit
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4024))
// CS Name: ::OculusInit*
class CORDL_TYPE OculusInit : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__OculusInit____c;

  /// @brief Field _oculusDeeplinkManager, offset 0x18, size 0x8
  __declspec(property(get = __get__oculusDeeplinkManager, put = __set__oculusDeeplinkManager))::GlobalNamespace::OculusDeeplinkManager* _oculusDeeplinkManager;

  /// @brief Field _dlcPromoPanelModel, offset 0x20, size 0x8
  __declspec(property(get = __get__dlcPromoPanelModel, put = __set__dlcPromoPanelModel))::GlobalNamespace::DlcPromoPanelModel* _dlcPromoPanelModel;

  /// @brief Field __enabled, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF___enabled, put = setStaticF___enabled)) bool __enabled;

  constexpr ::GlobalNamespace::OculusDeeplinkManager*& __get__oculusDeeplinkManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusDeeplinkManager*> const& __get__oculusDeeplinkManager() const;

  constexpr void __set__oculusDeeplinkManager(::GlobalNamespace::OculusDeeplinkManager* value);

  constexpr ::GlobalNamespace::DlcPromoPanelModel*& __get__dlcPromoPanelModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelModel*> const& __get__dlcPromoPanelModel() const;

  constexpr void __set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel* value);

  static inline void setStaticF___enabled(bool value);

  static inline bool getStaticF___enabled();

  /// @brief Method NoDomainReloadInit addr 0x20c84b0 size 0x5c virtual false final false
  static inline void NoDomainReloadInit();

  /// @brief Method Init addr 0x20c850c size 0xb4 virtual false final false
  inline void Init();

  /// @brief Method TryToInitialize addr 0x20c85c0 size 0x1a0 virtual false final false
  inline void TryToInitialize();

  /// @brief Method InitCallback addr 0x20c8760 size 0x1bc virtual false final false
  inline void InitCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>* msg);

  static inline ::GlobalNamespace::OculusInit* New_ctor();

  /// @brief Method .ctor addr 0x20c891c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OculusInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusInit(OculusInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusInit(OculusInit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusInit();

public:
  /// @brief Field _oculusDeeplinkManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OculusDeeplinkManager* ____oculusDeeplinkManager;

  /// @brief Field _dlcPromoPanelModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* ____dlcPromoPanelModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusInit, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusInit, ____oculusDeeplinkManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusInit, ____dlcPromoPanelModel) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusInit*, "", "OculusInit");
NEED_NO_BOX(::GlobalNamespace::__OculusInit____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit____c*, "", "OculusInit/<>c");
