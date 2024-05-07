#pragma once
// IWYU pragma private; include "UnityEngine/UI/LayoutRebuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutRebuilder)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine::UI {
class __LayoutRebuilder____c;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::UI {
class LayoutRebuilder;
}
namespace UnityEngine::UI {
class __LayoutRebuilder____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::LayoutRebuilder);
MARK_REF_PTR_T(::UnityEngine::UI::__LayoutRebuilder____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::LayoutRebuilder::<>c*
class CORDL_TYPE __LayoutRebuilder____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UI::__LayoutRebuilder____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0))::System::Predicate_1<::UnityW<::UnityEngine::Component>>* __9__10_0;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0))::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::Component>>* __9__12_0;

  /// @brief Field <>9__12_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_1, put = setStaticF___9__12_1))::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::Component>>* __9__12_1;

  /// @brief Field <>9__12_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_2, put = setStaticF___9__12_2))::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::Component>>* __9__12_2;

  /// @brief Field <>9__12_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_3, put = setStaticF___9__12_3))::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::Component>>* __9__12_3;

  static inline ::UnityEngine::UI::__LayoutRebuilder____c* New_ctor();

  /// @brief Method <Rebuild>b__12_0, addr 0x34ce1c0, size 0xbc, virtual false, abstract: false, final false
  inline void _Rebuild_b__12_0(::UnityEngine::Component* e);

  /// @brief Method <Rebuild>b__12_1, addr 0x34ce27c, size 0xbc, virtual false, abstract: false, final false
  inline void _Rebuild_b__12_1(::UnityEngine::Component* e);

  /// @brief Method <Rebuild>b__12_2, addr 0x34ce338, size 0xc0, virtual false, abstract: false, final false
  inline void _Rebuild_b__12_2(::UnityEngine::Component* e);

  /// @brief Method <Rebuild>b__12_3, addr 0x34ce3f8, size 0xc0, virtual false, abstract: false, final false
  inline void _Rebuild_b__12_3(::UnityEngine::Component* e);

  /// @brief Method <StripDisabledBehavioursFromList>b__10_0, addr 0x34ce134, size 0x8c, virtual false, abstract: false, final false
  inline bool _StripDisabledBehavioursFromList_b__10_0(::UnityEngine::Component* e);

  /// @brief Method <.cctor>b__5_0, addr 0x34ce0bc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::LayoutRebuilder* __cctor_b__5_0();

  /// @brief Method <.cctor>b__5_1, addr 0x34ce118, size 0x1c, virtual false, abstract: false, final false
  inline void __cctor_b__5_1(::UnityEngine::UI::LayoutRebuilder* x);

  /// @brief Method .ctor, addr 0x34ce0b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UI::__LayoutRebuilder____c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityW<::UnityEngine::Component>>* getStaticF___9__10_0();

  static inline ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::Component>>* getStaticF___9__12_0();

  static inline ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::Component>>* getStaticF___9__12_1();

  static inline ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::Component>>* getStaticF___9__12_2();

  static inline ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::Component>>* getStaticF___9__12_3();

  static inline void setStaticF___9(::UnityEngine::UI::__LayoutRebuilder____c* value);

  static inline void setStaticF___9__10_0(::System::Predicate_1<::UnityW<::UnityEngine::Component>>* value);

  static inline void setStaticF___9__12_0(::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::Component>>* value);

  static inline void setStaticF___9__12_1(::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::Component>>* value);

  static inline void setStaticF___9__12_2(::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::Component>>* value);

  static inline void setStaticF___9__12_3(::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::Component>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LayoutRebuilder____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LayoutRebuilder____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LayoutRebuilder____c(__LayoutRebuilder____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LayoutRebuilder____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LayoutRebuilder____c(__LayoutRebuilder____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__LayoutRebuilder____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::LayoutRebuilder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::LayoutRebuilder*
class CORDL_TYPE LayoutRebuilder : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UI::__LayoutRebuilder____c;

  /// @brief Field m_CachedHashFromTransform, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CachedHashFromTransform, put = __cordl_internal_set_m_CachedHashFromTransform)) int32_t m_CachedHashFromTransform;

  /// @brief Field m_ToRebuild, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ToRebuild, put = __cordl_internal_set_m_ToRebuild))::UnityW<::UnityEngine::RectTransform> m_ToRebuild;

  /// @brief Field s_Rebuilders, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Rebuilders, put = setStaticF_s_Rebuilders))::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UI::LayoutRebuilder*>* s_Rebuilders;

  __declspec(property(get = get_transform))::UnityW<::UnityEngine::Transform> transform;

  /// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
  constexpr operator ::UnityEngine::UI::ICanvasElement*() noexcept;

  /// @brief Method Clear, addr 0x34ccdac, size 0xc, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Equals, addr 0x34cdf8c, size 0x50, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method ForceRebuildLayoutImmediate, addr 0x34cd148, size 0xdc, virtual false, abstract: false, final false
  static inline void ForceRebuildLayoutImmediate(::UnityEngine::RectTransform* layoutRoot);

  /// @brief Method GetHashCode, addr 0x34cdf84, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GraphicUpdateComplete, addr 0x34cdf80, size 0x4, virtual true, abstract: false, final true
  inline void GraphicUpdateComplete();

  /// @brief Method Initialize, addr 0x34ccd78, size 0x34, virtual false, abstract: false, final false
  inline void Initialize(::UnityEngine::RectTransform* controller);

  /// @brief Method IsDestroyed, addr 0x34ccfec, size 0x60, virtual true, abstract: false, final true
  inline bool IsDestroyed();

  /// @brief Method LayoutComplete, addr 0x34cdf00, size 0x80, virtual true, abstract: false, final true
  inline void LayoutComplete();

  /// @brief Method MarkLayoutForRebuild, addr 0x34c84cc, size 0x3ec, virtual false, abstract: false, final false
  static inline void MarkLayoutForRebuild(::UnityEngine::RectTransform* rect);

  /// @brief Method MarkLayoutRootForRebuild, addr 0x34cdd9c, size 0x164, virtual false, abstract: false, final false
  static inline void MarkLayoutRootForRebuild(::UnityEngine::RectTransform* controller);

  static inline ::UnityEngine::UI::LayoutRebuilder* New_ctor();

  /// @brief Method PerformLayoutCalculation, addr 0x34cd4d8, size 0x300, virtual false, abstract: false, final false
  inline void PerformLayoutCalculation(::UnityEngine::RectTransform* rect, ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::Component>>* action);

  /// @brief Method PerformLayoutControl, addr 0x34cd7d8, size 0x3d0, virtual false, abstract: false, final false
  inline void PerformLayoutControl(::UnityEngine::RectTransform* rect, ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::Component>>* action);

  /// @brief Method ReapplyDrivenProperties, addr 0x34ccf90, size 0x54, virtual false, abstract: false, final false
  static inline void ReapplyDrivenProperties(::UnityEngine::RectTransform* driven);

  /// @brief Method Rebuild, addr 0x34cd224, size 0x2b4, virtual true, abstract: false, final true
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate executing);

  /// @brief Method StripDisabledBehavioursFromList, addr 0x34cd04c, size 0xfc, virtual false, abstract: false, final false
  static inline void StripDisabledBehavioursFromList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* components);

  /// @brief Method ToString, addr 0x34cdfdc, size 0x6c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ValidController, addr 0x34cdba8, size 0x1f4, virtual false, abstract: false, final false
  static inline bool ValidController(::UnityEngine::RectTransform* layoutRoot, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* comps);

  constexpr int32_t const& __cordl_internal_get_m_CachedHashFromTransform() const;

  constexpr int32_t& __cordl_internal_get_m_CachedHashFromTransform();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_ToRebuild() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_ToRebuild();

  constexpr void __cordl_internal_set_m_CachedHashFromTransform(int32_t value);

  constexpr void __cordl_internal_set_m_ToRebuild(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x34ce048, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UI::LayoutRebuilder*>* getStaticF_s_Rebuilders();

  /// @brief Method get_transform, addr 0x34ccfe4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> get_transform();

  /// @brief Convert to "::UnityEngine::UI::ICanvasElement"
  constexpr ::UnityEngine::UI::ICanvasElement* i___UnityEngine__UI__ICanvasElement() noexcept;

  static inline void setStaticF_s_Rebuilders(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UI::LayoutRebuilder*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutRebuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayoutRebuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutRebuilder(LayoutRebuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutRebuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutRebuilder(LayoutRebuilder const&) = delete;

  /// @brief Field m_ToRebuild, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_ToRebuild;

  /// @brief Field m_CachedHashFromTransform, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_CachedHashFromTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::LayoutRebuilder, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutRebuilder, ___m_ToRebuild) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutRebuilder, ___m_CachedHashFromTransform) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::LayoutRebuilder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::LayoutRebuilder*, "UnityEngine.UI", "LayoutRebuilder");
NEED_NO_BOX(::UnityEngine::UI::__LayoutRebuilder____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__LayoutRebuilder____c*, "UnityEngine.UI", "LayoutRebuilder/<>c");
