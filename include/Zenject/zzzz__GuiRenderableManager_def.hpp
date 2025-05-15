#pragma once
// IWYU pragma private; include "Zenject/GuiRenderableManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GuiRenderableManager)
namespace ModestTree::Util {
template <typename T1, typename T2> class ValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class GuiRenderableManager_RenderableInfo;
}
namespace Zenject {
class GuiRenderableManager___c;
}
namespace Zenject {
class GuiRenderableManager___c__DisplayClass1_0;
}
namespace Zenject {
class IGuiRenderable;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class GuiRenderableManager;
}
namespace Zenject {
class GuiRenderableManager_RenderableInfo;
}
namespace Zenject {
class GuiRenderableManager___c;
}
namespace Zenject {
class GuiRenderableManager___c__DisplayClass1_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::GuiRenderableManager);
MARK_REF_PTR_T(::Zenject::GuiRenderableManager_RenderableInfo);
MARK_REF_PTR_T(::Zenject::GuiRenderableManager___c);
MARK_REF_PTR_T(::Zenject::GuiRenderableManager___c__DisplayClass1_0);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.GuiRenderableManager/RenderableInfo
class CORDL_TYPE GuiRenderableManager_RenderableInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Priority, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Priority, put = __cordl_internal_set_Priority)) int32_t Priority;

  /// @brief Field Renderable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Renderable, put = __cordl_internal_set_Renderable)) ::Zenject::IGuiRenderable* Renderable;

  static inline ::Zenject::GuiRenderableManager_RenderableInfo* New_ctor(::Zenject::IGuiRenderable* renderable, int32_t priority);

  constexpr int32_t const& __cordl_internal_get_Priority() const;

  constexpr int32_t& __cordl_internal_get_Priority();

  constexpr ::Zenject::IGuiRenderable* const& __cordl_internal_get_Renderable() const;

  constexpr ::Zenject::IGuiRenderable*& __cordl_internal_get_Renderable();

  constexpr void __cordl_internal_set_Priority(int32_t value);

  constexpr void __cordl_internal_set_Renderable(::Zenject::IGuiRenderable* value);

  /// @brief Method __zenCreate, addr 0x4b4883c, size 0x10c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b48948, size 0x2f8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b480ec, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IGuiRenderable* renderable, int32_t priority);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GuiRenderableManager_RenderableInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GuiRenderableManager_RenderableInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GuiRenderableManager_RenderableInfo(GuiRenderableManager_RenderableInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GuiRenderableManager_RenderableInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GuiRenderableManager_RenderableInfo(GuiRenderableManager_RenderableInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12654 };

  /// @brief Field Renderable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IGuiRenderable* ___Renderable;

  /// @brief Field Priority, offset: 0x18, size: 0x4, def value: None
  int32_t ___Priority;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::GuiRenderableManager_RenderableInfo, ___Renderable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::GuiRenderableManager_RenderableInfo, ___Priority) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::GuiRenderableManager_RenderableInfo, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.GuiRenderableManager/<>c
class CORDL_TYPE GuiRenderableManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::GuiRenderableManager___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Func_2<::Zenject::GuiRenderableManager_RenderableInfo*, int32_t>* __9__1_0;

  /// @brief Field <>9__1_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_2, put = setStaticF___9__1_2)) ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* __9__1_2;

  static inline ::Zenject::GuiRenderableManager___c* New_ctor();

  /// @brief Method <.ctor>b__1_0, addr 0x4b48cbc, size 0x18, virtual false, abstract: false, final false
  inline int32_t __ctor_b__1_0(::Zenject::GuiRenderableManager_RenderableInfo* x);

  /// @brief Method <.ctor>b__1_2, addr 0x4b48ca4, size 0x18, virtual false, abstract: false, final false
  inline int32_t __ctor_b__1_2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x4b48cd4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b48d28, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b48c9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::GuiRenderableManager___c* getStaticF___9();

  static inline ::System::Func_2<::Zenject::GuiRenderableManager_RenderableInfo*, int32_t>* getStaticF___9__1_0();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* getStaticF___9__1_2();

  static inline void setStaticF___9(::Zenject::GuiRenderableManager___c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::Zenject::GuiRenderableManager_RenderableInfo*, int32_t>* value);

  static inline void setStaticF___9__1_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GuiRenderableManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GuiRenderableManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GuiRenderableManager___c(GuiRenderableManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GuiRenderableManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GuiRenderableManager___c(GuiRenderableManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12655 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::GuiRenderableManager___c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.GuiRenderableManager/<>c__DisplayClass1_0
class CORDL_TYPE GuiRenderableManager___c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field renderable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_renderable, put = __cordl_internal_set_renderable)) ::Zenject::IGuiRenderable* renderable;

  static inline ::Zenject::GuiRenderableManager___c__DisplayClass1_0* New_ctor();

  constexpr ::Zenject::IGuiRenderable* const& __cordl_internal_get_renderable() const;

  constexpr ::Zenject::IGuiRenderable*& __cordl_internal_get_renderable();

  constexpr void __cordl_internal_set_renderable(::Zenject::IGuiRenderable* value);

  /// @brief Method <.ctor>b__1, addr 0x4b48ee0, size 0x80, virtual false, abstract: false, final false
  inline bool __ctor_b__1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x4b48f60, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b48fb4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b480e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GuiRenderableManager___c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GuiRenderableManager___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GuiRenderableManager___c__DisplayClass1_0(GuiRenderableManager___c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GuiRenderableManager___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GuiRenderableManager___c__DisplayClass1_0(GuiRenderableManager___c__DisplayClass1_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12656 };

  /// @brief Field renderable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IGuiRenderable* ___renderable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::GuiRenderableManager___c__DisplayClass1_0, ___renderable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::GuiRenderableManager___c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.GuiRenderableManager
class CORDL_TYPE GuiRenderableManager : public ::System::Object {
public:
  // Declarations
  using RenderableInfo = ::Zenject::GuiRenderableManager_RenderableInfo;

  using __c = ::Zenject::GuiRenderableManager___c;

  using __c__DisplayClass1_0 = ::Zenject::GuiRenderableManager___c__DisplayClass1_0;

  /// @brief Field _renderables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__renderables,
                      put = __cordl_internal_set__renderables)) ::System::Collections::Generic::List_1<::Zenject::GuiRenderableManager_RenderableInfo*>* _renderables;

  static inline ::Zenject::GuiRenderableManager* New_ctor(::System::Collections::Generic::List_1<::Zenject::IGuiRenderable*>* renderables,
                                                          ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities);

  /// @brief Method OnGui, addr 0x4b4811c, size 0x310, virtual false, abstract: false, final false
  inline void OnGui();

  constexpr ::System::Collections::Generic::List_1<::Zenject::GuiRenderableManager_RenderableInfo*>* const& __cordl_internal_get__renderables() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::GuiRenderableManager_RenderableInfo*>*& __cordl_internal_get__renderables();

  constexpr void __cordl_internal_set__renderables(::System::Collections::Generic::List_1<::Zenject::GuiRenderableManager_RenderableInfo*>* value);

  /// @brief Method __zenCreate, addr 0x4b4842c, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b48544, size 0x2f8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b47b8c, size 0x558, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::Zenject::IGuiRenderable*>* renderables,
                    ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GuiRenderableManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GuiRenderableManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GuiRenderableManager(GuiRenderableManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GuiRenderableManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GuiRenderableManager(GuiRenderableManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12657 };

  /// @brief Field _renderables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::GuiRenderableManager_RenderableInfo*>* ____renderables;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::GuiRenderableManager, ____renderables) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::GuiRenderableManager, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::GuiRenderableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GuiRenderableManager*, "Zenject", "GuiRenderableManager");
NEED_NO_BOX(::Zenject::GuiRenderableManager_RenderableInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GuiRenderableManager_RenderableInfo*, "Zenject", "GuiRenderableManager/RenderableInfo");
NEED_NO_BOX(::Zenject::GuiRenderableManager___c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GuiRenderableManager___c*, "Zenject", "GuiRenderableManager/<>c");
NEED_NO_BOX(::Zenject::GuiRenderableManager___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GuiRenderableManager___c__DisplayClass1_0*, "Zenject", "GuiRenderableManager/<>c__DisplayClass1_0");
