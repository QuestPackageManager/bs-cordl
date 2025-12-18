#pragma once
// IWYU pragma private; include "Unity/Collections/AutoFreeAllocator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__ArrayOfArrays_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AutoFreeAllocator)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
struct AllocatorManager_Block;
}
namespace Unity::Collections {
class AllocatorManager_IAllocator;
}
namespace Unity::Collections {
class AllocatorManager_TryFunction;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
class AutoFreeAllocator_Try_000000E3$BurstDirectCall;
}
namespace Unity::Collections {
class AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate;
}
// Forward declare root types
namespace Unity::Collections {
class AutoFreeAllocator_Try_000000E3$BurstDirectCall;
}
namespace Unity::Collections {
class AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate;
}
namespace Unity::Collections {
struct AutoFreeAllocator;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall);
MARK_REF_PTR_T(::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate);
MARK_VAL_T(::Unity::Collections::AutoFreeAllocator);
// Dependencies System.MulticastDelegate
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AutoFreeAllocator/Try_000000E3$PostfixBurstDelegate
class CORDL_TYPE AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62f4270, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr state, ::ByRef<::Unity::Collections::AllocatorManager_Block> block, ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
                                             ::System::Object* _cordl_fixed_empty_name_whitespace_param_3);

  /// @brief Method EndInvoke, addr 0x62f4318, size 0x24, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x62f425c, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(::System::IntPtr state, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  static inline ::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                    ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x62f41f0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate(AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate(AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15517 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate, 0x80>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.IntPtr, System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AutoFreeAllocator/Try_000000E3$BurstDirectCall
class CORDL_TYPE AutoFreeAllocator_Try_000000E3$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x62f4448, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// @brief Method GetFunctionPointerDiscard, addr 0x62f433c, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::ByRef<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x62f411c, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t Invoke(::System::IntPtr state, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoFreeAllocator_Try_000000E3$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoFreeAllocator_Try_000000E3$BurstDirectCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoFreeAllocator_Try_000000E3$BurstDirectCall(AutoFreeAllocator_Try_000000E3$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoFreeAllocator_Try_000000E3$BurstDirectCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoFreeAllocator_Try_000000E3$BurstDirectCall(AutoFreeAllocator_Try_000000E3$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15518 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.IntPtr, Unity.Collections.AllocatorManager::AllocatorHandle, Unity.Collections.ArrayOfArrays`1<T>
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.AutoFreeAllocator
struct CORDL_TYPE AutoFreeAllocator {
public:
  // Declarations
  using Try_000000E3$BurstDirectCall = ::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall;

  using Try_000000E3$PostfixBurstDelegate = ::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate;

  __declspec(property(get = get_Function)) ::Unity::Collections::AllocatorManager_TryFunction* Function;

  __declspec(property(get = get_Handle, put = set_Handle)) ::Unity::Collections::AllocatorManager_AllocatorHandle Handle;

  __declspec(property(get = get_IsAutoDispose)) bool IsAutoDispose;

  __declspec(property(get = get_IsCustomAllocator)) bool IsCustomAllocator;

  __declspec(property(get = get_ToAllocator)) ::Unity::Collections::Allocator ToAllocator;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::Unity::Collections::AllocatorManager_IAllocator"
  constexpr operator ::Unity::Collections::AllocatorManager_IAllocator*();

  /// @brief Method Dispose, addr 0x62f3f70, size 0x60, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FreeAll, addr 0x62f3ea8, size 0xc8, virtual false, abstract: false, final false
  inline void FreeAll();

  /// @brief Method Initialize, addr 0x62f3dfc, size 0xac, virtual false, abstract: false, final false
  inline void Initialize(::Unity::Collections::AllocatorManager_AllocatorHandle backingAllocatorHandle);

  /// @brief Method Try, addr 0x62f4044, size 0xd8, virtual true, abstract: false, final true
  inline int32_t Try(::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method Try, addr 0x62f3ca4, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Try(::System::IntPtr state, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method Try$BurstManaged, addr 0x62f41ec, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Try$BurstManaged(::System::IntPtr state, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method Update, addr 0x62f3ca8, size 0x154, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method get_Function, addr 0x62f3fd0, size 0x74, virtual true, abstract: false, final true
  inline ::Unity::Collections::AllocatorManager_TryFunction* get_Function();

  /// @brief Method get_Handle, addr 0x62f41bc, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Collections::AllocatorManager_AllocatorHandle get_Handle();

  /// @brief Method get_IsAutoDispose, addr 0x62f41e4, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsAutoDispose();

  /// @brief Method get_IsCustomAllocator, addr 0x62f41d4, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsCustomAllocator();

  /// @brief Method get_ToAllocator, addr 0x62f41cc, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Collections::Allocator get_ToAllocator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::Unity::Collections::AllocatorManager_IAllocator"
  constexpr ::Unity::Collections::AllocatorManager_IAllocator* i___Unity__Collections__AllocatorManager_IAllocator();

  /// @brief Method set_Handle, addr 0x62f41c4, size 0x8, virtual true, abstract: false, final true
  inline void set_Handle(::Unity::Collections::AllocatorManager_AllocatorHandle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoFreeAllocator();

  // Ctor Parameters [CppParam { name: "m_allocated", ty: "::Unity::Collections::ArrayOfArrays_1<::System::IntPtr>", modifiers: "", def_value: None }, CppParam { name: "m_tofree", ty:
  // "::Unity::Collections::ArrayOfArrays_1<::System::IntPtr>", modifiers: "", def_value: None }, CppParam { name: "m_handle", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers:
  // "", def_value: None }, CppParam { name: "m_backingAllocatorHandle", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }]
  constexpr AutoFreeAllocator(::Unity::Collections::ArrayOfArrays_1<::System::IntPtr> m_allocated, ::Unity::Collections::ArrayOfArrays_1<::System::IntPtr> m_tofree,
                              ::Unity::Collections::AllocatorManager_AllocatorHandle m_handle, ::Unity::Collections::AllocatorManager_AllocatorHandle m_backingAllocatorHandle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15519 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field m_allocated, offset: 0x0, size: 0x20, def value: None
  ::Unity::Collections::ArrayOfArrays_1<::System::IntPtr> m_allocated;

  /// @brief Field m_tofree, offset: 0x20, size: 0x20, def value: None
  ::Unity::Collections::ArrayOfArrays_1<::System::IntPtr> m_tofree;

  /// @brief Field m_handle, offset: 0x40, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle m_handle;

  /// @brief Field m_backingAllocatorHandle, offset: 0x44, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle m_backingAllocatorHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::AutoFreeAllocator, m_allocated) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AutoFreeAllocator, m_tofree) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AutoFreeAllocator, m_handle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AutoFreeAllocator, m_backingAllocatorHandle) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::AutoFreeAllocator, 0x48>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall*, "Unity.Collections", "AutoFreeAllocator/Try_000000E3$BurstDirectCall");
NEED_NO_BOX(::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate*, "Unity.Collections", "AutoFreeAllocator/Try_000000E3$PostfixBurstDelegate");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AutoFreeAllocator, "Unity.Collections", "AutoFreeAllocator");
