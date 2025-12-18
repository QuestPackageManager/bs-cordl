#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/ProxyFlex_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProxyFlex_2)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Flex;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class LayoutStyle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
template <typename ControllerType> class ProxyController_1;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ScrollView;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
template <typename ControllerType, typename ProxyControllerType> class ProxyFlex_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// cpp template
template <typename ControllerType, typename ProxyControllerType>
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ProxyFlex`2<ControllerType,ProxyControllerType>
class CORDL_TYPE ProxyFlex_2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Dirty, put = set_Dirty)) bool Dirty;

  __declspec(property(get = get_Flex)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> Flex;

  __declspec(property(get = get_NumberOfControllers)) int32_t NumberOfControllers;

  __declspec(property(get = get_NumberOfProxies)) int32_t NumberOfProxies;

  /// @brief Field <Dirty>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__Dirty_k__BackingField, put = __cordl_internal_set__Dirty_k__BackingField)) bool _Dirty_k__BackingField;

  /// @brief Field _after, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__after, put = __cordl_internal_set__after)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> _after;

  /// @brief Field _before, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__before, put = __cordl_internal_set__before)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> _before;

  /// @brief Field _childrenLayoutStyle, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__childrenLayoutStyle, put = __cordl_internal_set__childrenLayoutStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle>
      _childrenLayoutStyle;

  /// @brief Field _lastScroll, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__lastScroll, put = __cordl_internal_set__lastScroll)) float_t _lastScroll;

  /// @brief Field _maximumNumberOfProxies, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__maximumNumberOfProxies, put = __cordl_internal_set__maximumNumberOfProxies)) int32_t _maximumNumberOfProxies;

  /// @brief Field _proxyChildren, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__proxyChildren, put = __cordl_internal_set__proxyChildren)) ::System::Collections::Generic::List_1<ProxyControllerType>* _proxyChildren;

  /// @brief Field _scrollView, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__scrollView, put = __cordl_internal_set__scrollView)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> _scrollView;

  /// @brief Field _targetsDictionary, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__targetsDictionary, put = __cordl_internal_set__targetsDictionary)) ::System::Collections::Generic::Dictionary_2<
      ControllerType, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>* _targetsDictionary;

  /// @brief Method AppendProxy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ProxyControllerType AppendProxy();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ComputeHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t ComputeHeight(int32_t startIndex, int32_t endIndex);

  /// @brief Method ComputeStartHeightFromProgress, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t ComputeStartHeightFromProgress(float_t progress);

  /// @brief Method ComputeTotalHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t ComputeTotalHeight();

  /// @brief Method ComputeTotalUsefulHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t ComputeTotalUsefulHeight();

  /// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Fill();

  /// @brief Method GetItemIndexAtHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetItemIndexAtHeight(float_t height);

  /// @brief Method HasScrolledEnough, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool HasScrolledEnough();

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*
  New_ctor(int32_t numberOfInstantiatedControllers, int32_t maximumNumberOfProxies, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle* layoutStyle,
           ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView* scrollView);

  /// @brief Method RemoveProxy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveProxy(ProxyControllerType proxy);

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get__Dirty_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Dirty_k__BackingField();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> const& __cordl_internal_get__after() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>& __cordl_internal_get__after();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> const& __cordl_internal_get__before() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>& __cordl_internal_get__before();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> const& __cordl_internal_get__childrenLayoutStyle() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle>& __cordl_internal_get__childrenLayoutStyle();

  constexpr float_t const& __cordl_internal_get__lastScroll() const;

  constexpr float_t& __cordl_internal_get__lastScroll();

  constexpr int32_t const& __cordl_internal_get__maximumNumberOfProxies() const;

  constexpr int32_t& __cordl_internal_get__maximumNumberOfProxies();

  constexpr ::System::Collections::Generic::List_1<ProxyControllerType>* const& __cordl_internal_get__proxyChildren() const;

  constexpr ::System::Collections::Generic::List_1<ProxyControllerType>*& __cordl_internal_get__proxyChildren();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> const& __cordl_internal_get__scrollView() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView>& __cordl_internal_get__scrollView();

  constexpr ::System::Collections::Generic::Dictionary_2<ControllerType, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>* const&
  __cordl_internal_get__targetsDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<ControllerType, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>*&
  __cordl_internal_get__targetsDictionary();

  constexpr void __cordl_internal_set__Dirty_k__BackingField(bool value);

  constexpr void __cordl_internal_set__after(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> value);

  constexpr void __cordl_internal_set__before(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> value);

  constexpr void __cordl_internal_set__childrenLayoutStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> value);

  constexpr void __cordl_internal_set__lastScroll(float_t value);

  constexpr void __cordl_internal_set__maximumNumberOfProxies(int32_t value);

  constexpr void __cordl_internal_set__proxyChildren(::System::Collections::Generic::List_1<ProxyControllerType>* value);

  constexpr void __cordl_internal_set__scrollView(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> value);

  constexpr void __cordl_internal_set__targetsDictionary(
      ::System::Collections::Generic::Dictionary_2<ControllerType, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t numberOfInstantiatedControllers, int32_t maximumNumberOfProxies, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle* layoutStyle,
                    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView* scrollView);

  /// @brief Method get_Dirty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_Dirty();

  /// @brief Method get_Flex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> get_Flex();

  /// @brief Method get_NumberOfControllers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_NumberOfControllers();

  /// @brief Method get_NumberOfProxies, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_NumberOfProxies();

  /// @brief Method set_Dirty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Dirty(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProxyFlex_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProxyFlex_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProxyFlex_2(ProxyFlex_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProxyFlex_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProxyFlex_2(ProxyFlex_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18380 };

  /// @brief Field _maximumNumberOfProxies, offset: 0x10, size: 0x4, def value: None
  int32_t ____maximumNumberOfProxies;

  /// @brief Field _targetsDictionary, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<ControllerType, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>* ____targetsDictionary;

  /// @brief Field _scrollView, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> ____scrollView;

  /// @brief Field _proxyChildren, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<ProxyControllerType>* ____proxyChildren;

  /// @brief Field <Dirty>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____Dirty_k__BackingField;

  /// @brief Field _before, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> ____before;

  /// @brief Field _after, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> ____after;

  /// @brief Field _childrenLayoutStyle, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> ____childrenLayoutStyle;

  /// @brief Field _lastScroll, offset: 0x50, size: 0x4, def value: None
  float_t ____lastScroll;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "ProxyFlex`2");
