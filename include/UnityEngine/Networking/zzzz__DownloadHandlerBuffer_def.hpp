#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadHandlerBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandlerBuffer)
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandlerBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandlerBuffer);
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Networking.DownloadHandler
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.DownloadHandlerBuffer
class CORDL_TYPE DownloadHandlerBuffer : public ::UnityEngine::Networking::DownloadHandler {
public:
  // Declarations
  /// @brief Field m_NativeData, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_m_NativeData, put = __cordl_internal_set_m_NativeData)) ::Unity::Collections::NativeArray_1<uint8_t> m_NativeData;

  /// @brief Method Create, addr 0x6c5d71c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(::UnityEngine::Networking::DownloadHandlerBuffer* obj);

  /// @brief Method Dispose, addr 0x6c5d7e8, size 0x60, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetNativeData, addr 0x6c5d7e0, size 0x8, virtual true, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData();

  /// @brief Method InternalCreateBuffer, addr 0x6c5d758, size 0x44, virtual false, abstract: false, final false
  inline void InternalCreateBuffer();

  static inline ::UnityEngine::Networking::DownloadHandlerBuffer* New_ctor();

  constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_m_NativeData() const;

  constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_m_NativeData();

  constexpr void __cordl_internal_set_m_NativeData(::Unity::Collections::NativeArray_1<uint8_t> value);

  /// @brief Method .ctor, addr 0x6c5d79c, size 0x44, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22031 };

  /// @brief Field m_NativeData, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> ___m_NativeData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::DownloadHandlerBuffer, ___m_NativeData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandlerBuffer, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandlerBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandlerBuffer*, "UnityEngine.Networking", "DownloadHandlerBuffer");
