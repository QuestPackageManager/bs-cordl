#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeTypeHandlerBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyNodeTypeHandlerBase)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace Unity::Hierarchy {
class HierarchyCommandList;
}
namespace Unity::Hierarchy {
struct HierarchyNodeFlags;
}
namespace Unity::Hierarchy {
class HierarchyNodeTypeHandlerBase_BindingsMarshaller;
}
namespace Unity::Hierarchy {
struct HierarchyNodeTypeHandlerBase_ConstructorScope;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace Unity::Hierarchy {
class HierarchySearchQueryDescriptor;
}
namespace Unity::Hierarchy {
class Hierarchy;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace Unity::Hierarchy {
class HierarchyNodeTypeHandlerBase;
}
namespace Unity::Hierarchy {
class HierarchyNodeTypeHandlerBase_BindingsMarshaller;
}
namespace Unity::Hierarchy {
struct HierarchyNodeTypeHandlerBase_ConstructorScope;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase);
MARK_REF_PTR_T(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller);
MARK_VAL_T(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope);
// Dependencies System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyNodeTypeHandlerBase/BindingsMarshaller
class CORDL_TYPE HierarchyNodeTypeHandlerBase_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x69035c8, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* handler);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyNodeTypeHandlerBase_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyNodeTypeHandlerBase_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyNodeTypeHandlerBase_BindingsMarshaller(HierarchyNodeTypeHandlerBase_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyNodeTypeHandlerBase_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyNodeTypeHandlerBase_BindingsMarshaller(HierarchyNodeTypeHandlerBase_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21709 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies System.IntPtr
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyNodeTypeHandlerBase/ConstructorScope
#pragma pack(push, 0)
struct CORDL_TYPE HierarchyNodeTypeHandlerBase_ConstructorScope {
public:
  // Declarations
  /// @brief Field m_CommandList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_CommandList, put = setStaticF_m_CommandList)) ::Unity::Hierarchy::HierarchyCommandList* m_CommandList;

  /// @brief Field m_Hierarchy, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_Hierarchy, put = setStaticF_m_Hierarchy)) ::Unity::Hierarchy::Hierarchy* m_Hierarchy;

  /// @brief Field m_Ptr, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_Ptr, put = setStaticF_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6903758, size 0x134, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x6902888, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr nativePtr, ::Unity::Hierarchy::Hierarchy* hierarchy, ::Unity::Hierarchy::HierarchyCommandList* cmdList);

  static inline ::Unity::Hierarchy::HierarchyCommandList* getStaticF_m_CommandList();

  static inline ::Unity::Hierarchy::Hierarchy* getStaticF_m_Hierarchy();

  static inline ::System::IntPtr getStaticF_m_Ptr();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  static inline void setStaticF_m_CommandList(::Unity::Hierarchy::HierarchyCommandList* value);

  static inline void setStaticF_m_Hierarchy(::Unity::Hierarchy::Hierarchy* value);

  static inline void setStaticF_m_Ptr(::System::IntPtr value);

  /// @brief Method set_CommandList, addr 0x69036d4, size 0x84, virtual false, abstract: false, final false
  static inline void set_CommandList(::Unity::Hierarchy::HierarchyCommandList* value);

  /// @brief Method set_Hierarchy, addr 0x6903650, size 0x84, virtual false, abstract: false, final false
  static inline void set_Hierarchy(::Unity::Hierarchy::Hierarchy* value);

  /// @brief Method set_Ptr, addr 0x69035dc, size 0x74, virtual false, abstract: false, final false
  static inline void set_Ptr(::System::IntPtr value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyNodeTypeHandlerBase_ConstructorScope();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21710 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope, 0x1>, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies System.IntPtr, System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyNodeTypeHandlerBase
class CORDL_TYPE HierarchyNodeTypeHandlerBase : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller;

  using ConstructorScope = ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope;

  /// @brief Field m_CommandList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CommandList, put = __cordl_internal_set_m_CommandList)) ::Unity::Hierarchy::HierarchyCommandList* m_CommandList;

  /// @brief Field m_Hierarchy, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Hierarchy, put = __cordl_internal_set_m_Hierarchy)) ::Unity::Hierarchy::Hierarchy* m_Hierarchy;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field s_NodeTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_NodeTypes, put = setStaticF_s_NodeTypes)) ::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* s_NodeTypes;

  /// @brief Method ChangesPending, addr 0x6903354, size 0x94, virtual true, abstract: false, final false
  inline bool ChangesPending();

  /// @brief Method ChangesPending_Injected, addr 0x69033e8, size 0x3c, virtual false, abstract: false, final false
  static inline bool ChangesPending_Injected(::System::IntPtr _unity_self);

  /// @brief Method CreateNodeTypeHandlerFromType, addr 0x69025cc, size 0x2bc, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateNodeTypeHandlerFromType(::System::IntPtr nativePtr, ::System::Type* handlerType, ::System::IntPtr hierarchyPtr, ::System::IntPtr cmdListPtr);

  /// @brief Method Dispose, addr 0x6901fec, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method FromIntPtr, addr 0x690251c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* FromIntPtr(::System::IntPtr handlePtr);

  /// @brief Method GetDefaultNodeFlags, addr 0x690217c, size 0xac, virtual true, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNodeFlags GetDefaultNodeFlags(::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags);

  /// @brief Method GetDefaultNodeFlags_Injected, addr 0x6902228, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Hierarchy::HierarchyNodeFlags GetDefaultNodeFlags_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node,
                                                                                    ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags);

  /// @brief Method GetNodeTypeName, addr 0x6901ff0, size 0x148, virtual true, abstract: false, final false
  inline ::StringW GetNodeTypeName();

  /// @brief Method GetNodeTypeName_Injected, addr 0x6902138, size 0x44, virtual false, abstract: false, final false
  static inline void GetNodeTypeName_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method Initialize, addr 0x6901fe8, size 0x4, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method IntegrateChanges, addr 0x6903424, size 0xac, virtual true, abstract: false, final false
  inline bool IntegrateChanges(::Unity::Hierarchy::HierarchyCommandList* cmdList);

  /// @brief Method IntegrateChanges_Injected, addr 0x69034d0, size 0x44, virtual false, abstract: false, final false
  static inline bool IntegrateChanges_Injected(::System::IntPtr _unity_self, ::System::IntPtr cmdList);

  /// @brief Method Internal_SearchBegin, addr 0x69025c0, size 0xc, virtual false, abstract: false, final false
  inline void Internal_SearchBegin(::Unity::Hierarchy::HierarchySearchQueryDescriptor* query);

  /// @brief Method InvokeChangesPending, addr 0x6902f34, size 0xe0, virtual false, abstract: false, final false
  static inline bool InvokeChangesPending(::System::IntPtr handlePtr);

  /// @brief Method InvokeDispose, addr 0x6902c38, size 0x124, virtual false, abstract: false, final false
  static inline void InvokeDispose(::System::IntPtr handlePtr);

  /// @brief Method InvokeGetDefaultNodeFlags, addr 0x6902e3c, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Hierarchy::HierarchyNodeFlags InvokeGetDefaultNodeFlags(::System::IntPtr handlePtr, ::ByRef<::Unity::Hierarchy::HierarchyNode> node,
                                                                                 ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags);

  /// @brief Method InvokeGetNodeTypeName, addr 0x6902d5c, size 0xe0, virtual false, abstract: false, final false
  static inline ::StringW InvokeGetNodeTypeName(::System::IntPtr handlePtr);

  /// @brief Method InvokeInitialize, addr 0x6902b58, size 0xe0, virtual false, abstract: false, final false
  static inline void InvokeInitialize(::System::IntPtr handlePtr);

  /// @brief Method InvokeIntegrateChanges, addr 0x6903014, size 0x178, virtual false, abstract: false, final false
  static inline bool InvokeIntegrateChanges(::System::IntPtr handlePtr, ::System::IntPtr cmdListPtr);

  /// @brief Method InvokeSearchEnd, addr 0x6903274, size 0xe0, virtual false, abstract: false, final false
  static inline void InvokeSearchEnd(::System::IntPtr handlePtr);

  /// @brief Method InvokeSearchMatch, addr 0x690318c, size 0xe8, virtual false, abstract: false, final false
  static inline bool InvokeSearchMatch(::System::IntPtr handlePtr, ::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method SearchBegin, addr 0x690227c, size 0xa4, virtual true, abstract: false, final false
  inline void SearchBegin(::Unity::Hierarchy::HierarchySearchQueryDescriptor* query);

  /// @brief Method SearchBegin_Injected, addr 0x6902320, size 0x44, virtual false, abstract: false, final false
  static inline void SearchBegin_Injected(::System::IntPtr _unity_self, ::Unity::Hierarchy::HierarchySearchQueryDescriptor* query);

  /// @brief Method SearchEnd, addr 0x690244c, size 0x94, virtual true, abstract: false, final false
  inline void SearchEnd();

  /// @brief Method SearchEnd_Injected, addr 0x69024e0, size 0x3c, virtual false, abstract: false, final false
  static inline void SearchEnd_Injected(::System::IntPtr _unity_self);

  /// @brief Method SearchMatch, addr 0x6902364, size 0xa4, virtual true, abstract: false, final false
  inline bool SearchMatch(::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method SearchMatch_Injected, addr 0x6902408, size 0x44, virtual false, abstract: false, final false
  static inline bool SearchMatch_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method TryGetStaticNodeType, addr 0x69029d0, size 0x188, virtual false, abstract: false, final false
  static inline bool TryGetStaticNodeType(::System::Type* handlerType, ::ByRef<int32_t> nodeType);

  constexpr ::Unity::Hierarchy::HierarchyCommandList* const& __cordl_internal_get_m_CommandList() const;

  constexpr ::Unity::Hierarchy::HierarchyCommandList*& __cordl_internal_get_m_CommandList();

  constexpr ::Unity::Hierarchy::Hierarchy* const& __cordl_internal_get_m_Hierarchy() const;

  constexpr ::Unity::Hierarchy::Hierarchy*& __cordl_internal_get_m_Hierarchy();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_CommandList(::Unity::Hierarchy::HierarchyCommandList* value);

  constexpr void __cordl_internal_set_m_Hierarchy(::Unity::Hierarchy::Hierarchy* value);

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* getStaticF_s_NodeTypes();

  static inline void setStaticF_s_NodeTypes(::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyNodeTypeHandlerBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyNodeTypeHandlerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyNodeTypeHandlerBase(HierarchyNodeTypeHandlerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyNodeTypeHandlerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyNodeTypeHandlerBase(HierarchyNodeTypeHandlerBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21711 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_Hierarchy, offset: 0x18, size: 0x8, def value: None
  ::Unity::Hierarchy::Hierarchy* ___m_Hierarchy;

  /// @brief Field m_CommandList, offset: 0x20, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyCommandList* ___m_CommandList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase, ___m_Hierarchy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase, ___m_CommandList) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase, 0x28>, "Size mismatch!");

} // namespace Unity::Hierarchy
NEED_NO_BOX(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*, "Unity.Hierarchy", "HierarchyNodeTypeHandlerBase");
NEED_NO_BOX(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller*, "Unity.Hierarchy", "HierarchyNodeTypeHandlerBase/BindingsMarshaller");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope, "Unity.Hierarchy", "HierarchyNodeTypeHandlerBase/ConstructorScope");
