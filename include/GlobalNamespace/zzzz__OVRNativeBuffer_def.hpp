#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRNativeBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRNativeBuffer)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRNativeBuffer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRNativeBuffer);
// Dependencies System.IDisposable, System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRNativeBuffer
class CORDL_TYPE OVRNativeBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field m_numBytes, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_numBytes, put = __cordl_internal_set_m_numBytes)) int32_t m_numBytes;

  /// @brief Field m_ptr, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ptr, put = __cordl_internal_set_m_ptr)) ::System::IntPtr m_ptr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x3fa5ce8, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x3fa5cbc, size 0x24, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x3fa5c14, size 0xa8, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetCapacity, addr 0x3fa5ce0, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetCapacity();

  /// @brief Method GetPointer, addr 0x3fa1360, size 0x60, virtual false, abstract: false, final false
  inline ::System::IntPtr GetPointer(int32_t byteOffset);

  static inline ::GlobalNamespace::OVRNativeBuffer* New_ctor(int32_t numBytes);

  /// @brief Method Reallocate, addr 0x3fa5b90, size 0x84, virtual false, abstract: false, final false
  inline void Reallocate(int32_t numBytes);

  /// @brief Method Release, addr 0x3fa5d58, size 0x7c, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method Reset, addr 0x3fa135c, size 0x4, virtual false, abstract: false, final false
  inline void Reset(int32_t numBytes);

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr int32_t const& __cordl_internal_get_m_numBytes() const;

  constexpr int32_t& __cordl_internal_get_m_numBytes();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_ptr();

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_m_numBytes(int32_t value);

  constexpr void __cordl_internal_set_m_ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x3fa1784, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t numBytes);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRNativeBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRNativeBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRNativeBuffer(OVRNativeBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRNativeBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRNativeBuffer(OVRNativeBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7847 };

  /// @brief Field disposed, offset: 0x10, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field m_numBytes, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_numBytes;

  /// @brief Field m_ptr, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ___m_ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRNativeBuffer, ___disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRNativeBuffer, ___m_numBytes) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRNativeBuffer, ___m_ptr) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRNativeBuffer, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRNativeBuffer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNativeBuffer*, "", "OVRNativeBuffer");
