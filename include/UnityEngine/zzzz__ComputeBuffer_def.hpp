#pragma once
// IWYU pragma private; include "UnityEngine/ComputeBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeBuffer)
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
struct ComputeBufferMode;
}
namespace UnityEngine {
struct ComputeBufferType;
}
namespace UnityEngine {
class ComputeBuffer_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class ComputeBuffer_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ComputeBuffer);
MARK_REF_PTR_T(::UnityEngine::ComputeBuffer_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ComputeBuffer/BindingsMarshaller
class CORDL_TYPE ComputeBuffer_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x69223c8, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::ComputeBuffer* computeBuffer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeBuffer_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComputeBuffer_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComputeBuffer_BindingsMarshaller(ComputeBuffer_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComputeBuffer_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComputeBuffer_BindingsMarshaller(ComputeBuffer_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10374 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ComputeBuffer_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ComputeBuffer
class CORDL_TYPE ComputeBuffer : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::ComputeBuffer_BindingsMarshaller;

  __declspec(property(get = get_count)) int32_t count;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  __declspec(property(get = get_stride)) int32_t stride;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method DestroyBuffer, addr 0x6921b9c, size 0x48, virtual false, abstract: false, final false
  static inline void DestroyBuffer(::UnityEngine::ComputeBuffer* buf);

  /// @brief Method DestroyBuffer_Injected, addr 0x6921c40, size 0x3c, virtual false, abstract: false, final false
  static inline void DestroyBuffer_Injected(::System::IntPtr buf);

  /// @brief Method Dispose, addr 0x6921b34, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6921a64, size 0xd0, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x6921a1c, size 0x48, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method InitBuffer, addr 0x6921be4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::IntPtr InitBuffer(int32_t count, int32_t stride, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode usage);

  /// @brief Method InternalSetData, addr 0x69221d0, size 0x88, virtual false, abstract: false, final false
  inline void InternalSetData(::System::Array* data, int32_t managedBufferStartIndex, int32_t computeBufferStartIndex, int32_t count, int32_t elemSize);

  /// @brief Method InternalSetData_Injected, addr 0x6922354, size 0x74, virtual false, abstract: false, final false
  static inline void InternalSetData_Injected(::System::IntPtr _unity_self, ::System::Array* data, int32_t managedBufferStartIndex, int32_t computeBufferStartIndex, int32_t count, int32_t elemSize);

  /// @brief Method InternalSetNativeData, addr 0x6922258, size 0x88, virtual false, abstract: false, final false
  inline void InternalSetNativeData(::System::IntPtr data, int32_t nativeBufferStartIndex, int32_t computeBufferStartIndex, int32_t count, int32_t elemSize);

  /// @brief Method InternalSetNativeData_Injected, addr 0x69222e0, size 0x74, virtual false, abstract: false, final false
  static inline void InternalSetNativeData_Injected(::System::IntPtr _unity_self, ::System::IntPtr data, int32_t nativeBufferStartIndex, int32_t computeBufferStartIndex, int32_t count,
                                                    int32_t elemSize);

  /// @brief Method IsValid, addr 0x6921f0c, size 0x50, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method IsValidBuffer, addr 0x6921e88, size 0x48, virtual false, abstract: false, final false
  static inline bool IsValidBuffer(::UnityEngine::ComputeBuffer* buf);

  /// @brief Method IsValidBuffer_Injected, addr 0x6921ed0, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsValidBuffer_Injected(::System::IntPtr buf);

  static inline ::UnityEngine::ComputeBuffer* New_ctor(int32_t count, int32_t stride);

  static inline ::UnityEngine::ComputeBuffer* New_ctor(int32_t count, int32_t stride, ::UnityEngine::ComputeBufferType type);

  static inline ::UnityEngine::ComputeBuffer* New_ctor(int32_t count, int32_t stride, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode usage, int32_t stackDepth);

  /// @brief Method Release, addr 0x6921e84, size 0x4, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method SetData, addr 0x6922074, size 0x15c, virtual false, abstract: false, final false
  inline void SetData(::System::Array* data);

  /// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetData(::Unity::Collections::NativeArray_1<T> data);

  /// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetData(::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex, int32_t computeBufferStartIndex, int32_t count);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x6921c7c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t count, int32_t stride);

  /// @brief Method .ctor, addr 0x6921e54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t count, int32_t stride, ::UnityEngine::ComputeBufferType type);

  /// @brief Method .ctor, addr 0x6921c88, size 0x1cc, virtual false, abstract: false, final false
  inline void _ctor(int32_t count, int32_t stride, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode usage, int32_t stackDepth);

  /// @brief Method get_count, addr 0x6921f5c, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// @brief Method get_count_Injected, addr 0x6921fac, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_count_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stride, addr 0x6921fe8, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_stride();

  /// @brief Method get_stride_Injected, addr 0x6922038, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_stride_Injected(::System::IntPtr _unity_self);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComputeBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComputeBuffer(ComputeBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComputeBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComputeBuffer(ComputeBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10375 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ComputeBuffer, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ComputeBuffer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ComputeBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ComputeBuffer*, "UnityEngine", "ComputeBuffer");
NEED_NO_BOX(::UnityEngine::ComputeBuffer_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ComputeBuffer_BindingsMarshaller*, "UnityEngine", "ComputeBuffer/BindingsMarshaller");
