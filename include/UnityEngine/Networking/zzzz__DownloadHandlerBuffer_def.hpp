#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandlerBuffer)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandlerBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandlerBuffer);
// Type: UnityEngine.Networking::DownloadHandlerBuffer
// SizeInfo { instance_size: 40, native_size: 24, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: ::UnityEngine.Networking::DownloadHandlerBuffer*
class CORDL_TYPE DownloadHandlerBuffer : public ::UnityEngine::Networking::DownloadHandler {
public:
  // Declarations
  /// @brief Field m_NativeData, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_m_NativeData, put = __cordl_internal_set_m_NativeData))::Unity::Collections::NativeArray_1<uint8_t> m_NativeData;

  /// @brief Method Create, addr 0x33fdc38, size 0x3c, virtual false, abstract: false, final false
  static inline void* Create(::UnityEngine::Networking::DownloadHandlerBuffer* obj);

  /// @brief Method Dispose, addr 0x33fdcc0, size 0x1c, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetNativeData, addr 0x33fdcb8, size 0x8, virtual true, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData();

  /// @brief Method InternalCreateBuffer, addr 0x33fdc74, size 0x44, virtual false, abstract: false, final false
  inline void InternalCreateBuffer();

  static inline ::UnityEngine::Networking::DownloadHandlerBuffer* New_ctor();

  constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_m_NativeData() const;

  constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_m_NativeData();

  constexpr void __cordl_internal_set_m_NativeData(::Unity::Collections::NativeArray_1<uint8_t> value);

  /// @brief Method .ctor, addr 0x33fd278, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadHandlerBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DownloadHandlerBuffer(DownloadHandlerBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DownloadHandlerBuffer(DownloadHandlerBuffer const&) = delete;

  /// @brief Field m_NativeData, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> ___m_NativeData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandlerBuffer, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::DownloadHandlerBuffer, ___m_NativeData) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandlerBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandlerBuffer*, "UnityEngine.Networking", "DownloadHandlerBuffer");
