#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyCommandList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HierarchyCommandList)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Hierarchy {
class HierarchyCommandList_BindingsMarshaller;
}
// Forward declare root types
namespace Unity::Hierarchy {
class HierarchyCommandList;
}
namespace Unity::Hierarchy {
class HierarchyCommandList_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Hierarchy::HierarchyCommandList);
MARK_REF_PTR_T(::Unity::Hierarchy::HierarchyCommandList_BindingsMarshaller);
// Dependencies System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyCommandList/BindingsMarshaller
class CORDL_TYPE HierarchyCommandList_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x696e2c4, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::Unity::Hierarchy::HierarchyCommandList* cmdList);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyCommandList_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyCommandList_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyCommandList_BindingsMarshaller(HierarchyCommandList_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyCommandList_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyCommandList_BindingsMarshaller(HierarchyCommandList_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21750 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyCommandList_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies System.IntPtr, System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyCommandList
class CORDL_TYPE HierarchyCommandList : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::Unity::Hierarchy::HierarchyCommandList_BindingsMarshaller;

  /// @brief Field m_IsOwner, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsOwner, put = __cordl_internal_set_m_IsOwner)) bool m_IsOwner;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateCommandList, addr 0x696e268, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateCommandList(::System::IntPtr nativePtr);

  /// @brief Method Destroy, addr 0x696e1a4, size 0x3c, virtual false, abstract: false, final false
  static inline void Destroy(::System::IntPtr nativePtr);

  /// @brief Method Dispose, addr 0x696e13c, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x696e0e8, size 0x54, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x696e0a0, size 0x48, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FromIntPtr, addr 0x696e1e0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Hierarchy::HierarchyCommandList* FromIntPtr(::System::IntPtr handlePtr);

  static inline ::Unity::Hierarchy::HierarchyCommandList* New_ctor(::System::IntPtr nativePtr);

  constexpr bool const& __cordl_internal_get_m_IsOwner() const;

  constexpr bool& __cordl_internal_get_m_IsOwner();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_IsOwner(bool value);

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x696e094, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr nativePtr);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyCommandList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyCommandList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyCommandList(HierarchyCommandList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyCommandList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyCommandList(HierarchyCommandList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21751 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_IsOwner, offset: 0x18, size: 0x1, def value: None
  bool ___m_IsOwner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyCommandList, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyCommandList, ___m_IsOwner) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyCommandList, 0x20>, "Size mismatch!");

} // namespace Unity::Hierarchy
NEED_NO_BOX(::Unity::Hierarchy::HierarchyCommandList);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyCommandList*, "Unity.Hierarchy", "HierarchyCommandList");
NEED_NO_BOX(::Unity::Hierarchy::HierarchyCommandList_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyCommandList_BindingsMarshaller*, "Unity.Hierarchy", "HierarchyCommandList/BindingsMarshaller");
