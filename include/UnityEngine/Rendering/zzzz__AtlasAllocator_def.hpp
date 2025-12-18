#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AtlasAllocator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AtlasAllocator)
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine::Rendering {
class AtlasAllocator_AtlasNode;
}
namespace UnityEngine::Rendering {
class AtlasAllocator___c;
}
namespace UnityEngine::Rendering {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class AtlasAllocator;
}
namespace UnityEngine::Rendering {
class AtlasAllocator_AtlasNode;
}
namespace UnityEngine::Rendering {
class AtlasAllocator___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::AtlasAllocator);
MARK_REF_PTR_T(::UnityEngine::Rendering::AtlasAllocator_AtlasNode);
MARK_REF_PTR_T(::UnityEngine::Rendering::AtlasAllocator___c);
// Dependencies System.Object, UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.AtlasAllocator/AtlasNode
class CORDL_TYPE AtlasAllocator_AtlasNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_BottomChild, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BottomChild, put = __cordl_internal_set_m_BottomChild)) ::UnityEngine::Rendering::AtlasAllocator_AtlasNode* m_BottomChild;

  /// @brief Field m_Rect, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Rect, put = __cordl_internal_set_m_Rect)) ::UnityEngine::Vector4 m_Rect;

  /// @brief Field m_RightChild, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RightChild, put = __cordl_internal_set_m_RightChild)) ::UnityEngine::Rendering::AtlasAllocator_AtlasNode* m_RightChild;

  /// @brief Method Allocate, addr 0x65f9950, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::AtlasAllocator_AtlasNode* Allocate(::ByRef<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*> pool, int32_t width,
                                                                      int32_t height, bool powerOfTwoPadding);

  static inline ::UnityEngine::Rendering::AtlasAllocator_AtlasNode* New_ctor();

  /// @brief Method Release, addr 0x65f9b74, size 0xe0, virtual false, abstract: false, final false
  inline void Release(::ByRef<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*> pool);

  constexpr ::UnityEngine::Rendering::AtlasAllocator_AtlasNode* const& __cordl_internal_get_m_BottomChild() const;

  constexpr ::UnityEngine::Rendering::AtlasAllocator_AtlasNode*& __cordl_internal_get_m_BottomChild();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_m_Rect() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_m_Rect();

  constexpr ::UnityEngine::Rendering::AtlasAllocator_AtlasNode* const& __cordl_internal_get_m_RightChild() const;

  constexpr ::UnityEngine::Rendering::AtlasAllocator_AtlasNode*& __cordl_internal_get_m_RightChild();

  constexpr void __cordl_internal_set_m_BottomChild(::UnityEngine::Rendering::AtlasAllocator_AtlasNode* value);

  constexpr void __cordl_internal_set_m_Rect(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_m_RightChild(::UnityEngine::Rendering::AtlasAllocator_AtlasNode* value);

  /// @brief Method .ctor, addr 0x65f98b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AtlasAllocator_AtlasNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AtlasAllocator_AtlasNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AtlasAllocator_AtlasNode(AtlasAllocator_AtlasNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AtlasAllocator_AtlasNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AtlasAllocator_AtlasNode(AtlasAllocator_AtlasNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12223 };

  /// @brief Field m_RightChild, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::AtlasAllocator_AtlasNode* ___m_RightChild;

  /// @brief Field m_BottomChild, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::AtlasAllocator_AtlasNode* ___m_BottomChild;

  /// @brief Field m_Rect, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_Rect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocator_AtlasNode, ___m_RightChild) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocator_AtlasNode, ___m_BottomChild) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocator_AtlasNode, ___m_Rect) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AtlasAllocator_AtlasNode, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.AtlasAllocator/<>c
class CORDL_TYPE AtlasAllocator___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::AtlasAllocator___c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>* __9__6_0;

  /// @brief Field <>9__6_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_1, put = setStaticF___9__6_1)) ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>* __9__6_1;

  static inline ::UnityEngine::Rendering::AtlasAllocator___c* New_ctor();

  /// @brief Method <.ctor>b__6_0, addr 0x65f9cac, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__6_0(::UnityEngine::Rendering::AtlasAllocator_AtlasNode* _);

  /// @brief Method <.ctor>b__6_1, addr 0x65f9cb0, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__6_1(::UnityEngine::Rendering::AtlasAllocator_AtlasNode* _);

  /// @brief Method .ctor, addr 0x65f9ca8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::AtlasAllocator___c* getStaticF___9();

  static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>* getStaticF___9__6_0();

  static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>* getStaticF___9__6_1();

  static inline void setStaticF___9(::UnityEngine::Rendering::AtlasAllocator___c* value);

  static inline void setStaticF___9__6_0(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>* value);

  static inline void setStaticF___9__6_1(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AtlasAllocator___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AtlasAllocator___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AtlasAllocator___c(AtlasAllocator___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AtlasAllocator___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AtlasAllocator___c(AtlasAllocator___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12224 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AtlasAllocator___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.AtlasAllocator
class CORDL_TYPE AtlasAllocator : public ::System::Object {
public:
  // Declarations
  using AtlasNode = ::UnityEngine::Rendering::AtlasAllocator_AtlasNode;

  using __c = ::UnityEngine::Rendering::AtlasAllocator___c;

  /// @brief Field m_Height, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Height, put = __cordl_internal_set_m_Height)) int32_t m_Height;

  /// @brief Field m_NodePool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NodePool,
                      put = __cordl_internal_set_m_NodePool)) ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>* m_NodePool;

  /// @brief Field m_Root, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Root, put = __cordl_internal_set_m_Root)) ::UnityEngine::Rendering::AtlasAllocator_AtlasNode* m_Root;

  /// @brief Field m_Width, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Width, put = __cordl_internal_set_m_Width)) int32_t m_Width;

  /// @brief Field powerOfTwoPadding, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_powerOfTwoPadding, put = __cordl_internal_set_powerOfTwoPadding)) bool powerOfTwoPadding;

  /// @brief Method Allocate, addr 0x65f98c0, size 0x90, virtual false, abstract: false, final false
  inline bool Allocate(::ByRef<::UnityEngine::Vector4> result, int32_t width, int32_t height);

  static inline ::UnityEngine::Rendering::AtlasAllocator* New_ctor(int32_t width, int32_t height, bool potPadding);

  /// @brief Method Reset, addr 0x65f9b38, size 0x3c, virtual false, abstract: false, final false
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_m_Height() const;

  constexpr int32_t& __cordl_internal_get_m_Height();

  constexpr ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>* const& __cordl_internal_get_m_NodePool() const;

  constexpr ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*& __cordl_internal_get_m_NodePool();

  constexpr ::UnityEngine::Rendering::AtlasAllocator_AtlasNode* const& __cordl_internal_get_m_Root() const;

  constexpr ::UnityEngine::Rendering::AtlasAllocator_AtlasNode*& __cordl_internal_get_m_Root();

  constexpr int32_t const& __cordl_internal_get_m_Width() const;

  constexpr int32_t& __cordl_internal_get_m_Width();

  constexpr bool const& __cordl_internal_get_powerOfTwoPadding() const;

  constexpr bool& __cordl_internal_get_powerOfTwoPadding();

  constexpr void __cordl_internal_set_m_Height(int32_t value);

  constexpr void __cordl_internal_set_m_NodePool(::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>* value);

  constexpr void __cordl_internal_set_m_Root(::UnityEngine::Rendering::AtlasAllocator_AtlasNode* value);

  constexpr void __cordl_internal_set_m_Width(int32_t value);

  constexpr void __cordl_internal_set_powerOfTwoPadding(bool value);

  /// @brief Method .ctor, addr 0x65f96bc, size 0x1fc, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, bool potPadding);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AtlasAllocator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AtlasAllocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AtlasAllocator(AtlasAllocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AtlasAllocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AtlasAllocator(AtlasAllocator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12225 };

  /// @brief Field m_Root, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::AtlasAllocator_AtlasNode* ___m_Root;

  /// @brief Field m_Width, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Width;

  /// @brief Field m_Height, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_Height;

  /// @brief Field powerOfTwoPadding, offset: 0x20, size: 0x1, def value: None
  bool ___powerOfTwoPadding;

  /// @brief Field m_NodePool, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>* ___m_NodePool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocator, ___m_Root) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocator, ___m_Width) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocator, ___m_Height) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocator, ___powerOfTwoPadding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocator, ___m_NodePool) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AtlasAllocator, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::AtlasAllocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AtlasAllocator*, "UnityEngine.Rendering", "AtlasAllocator");
NEED_NO_BOX(::UnityEngine::Rendering::AtlasAllocator_AtlasNode);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AtlasAllocator_AtlasNode*, "UnityEngine.Rendering", "AtlasAllocator/AtlasNode");
NEED_NO_BOX(::UnityEngine::Rendering::AtlasAllocator___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AtlasAllocator___c*, "UnityEngine.Rendering", "AtlasAllocator/<>c");
