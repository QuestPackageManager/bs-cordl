#pragma once
// IWYU pragma private; include "UnityEngine/ObjectDispatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectDispatcher)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> class Action_8;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class ObjectDispatcher___c;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct TransformDispatchData;
}
namespace UnityEngine {
struct TypeDispatchData;
}
// Forward declare root types
namespace UnityEngine {
class ObjectDispatcher;
}
namespace UnityEngine {
class ObjectDispatcher___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ObjectDispatcher);
MARK_REF_PTR_T(::UnityEngine::ObjectDispatcher___c);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ObjectDispatcher/<>c
class CORDL_TYPE ObjectDispatcher___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ObjectDispatcher___c* __9;

  static inline ::UnityEngine::ObjectDispatcher___c* New_ctor();

  /// @brief Method <.cctor>b__54_0, addr 0x48a5e68, size 0xd0, virtual false, abstract: false, final false
  inline void __cctor_b__54_0(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> changed, ::System::IntPtr changedID, ::System::IntPtr destroyedID, int32_t changedCount,
                              int32_t destroyedCount, ::System::Action_1<::UnityEngine::TypeDispatchData>* callback);

  /// @brief Method <.cctor>b__54_1, addr 0x48a5f38, size 0x204, virtual false, abstract: false, final false
  inline void __cctor_b__54_1(::System::IntPtr transformed, ::System::IntPtr parents, ::System::IntPtr localToWorldMatrices, ::System::IntPtr positions, ::System::IntPtr rotations,
                              ::System::IntPtr scales, int32_t count, ::System::Action_1<::UnityEngine::TransformDispatchData>* callback);

  /// @brief Method .ctor, addr 0x48a5e60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ObjectDispatcher___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::ObjectDispatcher___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectDispatcher___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectDispatcher___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectDispatcher___c(ObjectDispatcher___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectDispatcher___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectDispatcher___c(ObjectDispatcher___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10830 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ObjectDispatcher___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ObjectDispatcher
class CORDL_TYPE ObjectDispatcher : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ObjectDispatcher___c;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field s_TransformDispatch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TransformDispatch,
                      put = setStaticF_s_TransformDispatch)) ::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t,
                                                                                ::System::Action_1<::UnityEngine::TransformDispatchData>*>* s_TransformDispatch;

  /// @brief Field s_TypeDispatch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TypeDispatch,
                      put = setStaticF_s_TypeDispatch)) ::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, ::System::IntPtr, ::System::IntPtr,
                                                                           int32_t, int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*>* s_TypeDispatch;

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  static inline ::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t,
                                   ::System::Action_1<::UnityEngine::TransformDispatchData>*>*
  getStaticF_s_TransformDispatch();

  static inline ::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t,
                                   ::System::Action_1<::UnityEngine::TypeDispatchData>*>*
  getStaticF_s_TypeDispatch();

  static inline void setStaticF_s_TransformDispatch(::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t,
                                                                       ::System::Action_1<::UnityEngine::TransformDispatchData>*>* value);

  static inline void setStaticF_s_TypeDispatch(::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, ::System::IntPtr, ::System::IntPtr, int32_t,
                                                                  int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectDispatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectDispatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectDispatcher(ObjectDispatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectDispatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectDispatcher(ObjectDispatcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10831 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ObjectDispatcher, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ObjectDispatcher, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ObjectDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ObjectDispatcher*, "UnityEngine", "ObjectDispatcher");
NEED_NO_BOX(::UnityEngine::ObjectDispatcher___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ObjectDispatcher___c*, "UnityEngine", "ObjectDispatcher/<>c");
