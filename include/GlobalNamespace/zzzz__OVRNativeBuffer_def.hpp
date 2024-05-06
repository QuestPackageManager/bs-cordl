#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRNativeBuffer)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRNativeBuffer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRNativeBuffer);
// Type: ::OVRNativeBuffer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRNativeBuffer*
class CORDL_TYPE OVRNativeBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field m_numBytes, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_numBytes, put = __cordl_internal_set_m_numBytes)) int32_t m_numBytes;

  /// @brief Field m_ptr, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ptr, put = __cordl_internal_set_m_ptr)) void* m_ptr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2af09e4, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2af09b8, size 0x24, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x2af0910, size 0xa8, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetCapacity, addr 0x2af09dc, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetCapacity();

  /// @brief Method GetPointer, addr 0x2aebfa0, size 0x9c, virtual false, abstract: false, final false
  inline void* GetPointer(int32_t byteOffset);

  static inline ::GlobalNamespace::OVRNativeBuffer* New_ctor(int32_t numBytes);

  /// @brief Method Reallocate, addr 0x2af0870, size 0xa0, virtual false, abstract: false, final false
  inline void Reallocate(int32_t numBytes);

  /// @brief Method Release, addr 0x2af0a54, size 0xa4, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method Reset, addr 0x2aebf9c, size 0x4, virtual false, abstract: false, final false
  inline void Reset(int32_t numBytes);

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr int32_t const& __cordl_internal_get_m_numBytes() const;

  constexpr int32_t& __cordl_internal_get_m_numBytes();

  constexpr void* const& __cordl_internal_get_m_ptr() const;

  constexpr void*& __cordl_internal_get_m_ptr();

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_m_numBytes(int32_t value);

  constexpr void __cordl_internal_set_m_ptr(void* value);

  /// @brief Method .ctor, addr 0x2aec3f8, size 0x70, virtual false, abstract: false, final false
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

  /// @brief Field disposed, offset: 0x10, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field m_numBytes, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_numBytes;

  /// @brief Field m_ptr, offset: 0x18, size: 0x8, def value: None
  void* ___m_ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRNativeBuffer, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRNativeBuffer, ___disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRNativeBuffer, ___m_numBytes) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRNativeBuffer, ___m_ptr) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRNativeBuffer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNativeBuffer*, "", "OVRNativeBuffer");
