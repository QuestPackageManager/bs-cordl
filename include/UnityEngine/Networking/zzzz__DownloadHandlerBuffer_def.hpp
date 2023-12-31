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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15580)), TypeDefinitionIndex(TypeDefinitionIndex(9999)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 741
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(15581)) CS Name: ::UnityEngine.Networking::DownloadHandlerBuffer*
class CORDL_TYPE DownloadHandlerBuffer : public ::UnityEngine::Networking::DownloadHandler {
public:
  // Declarations
  /// @brief Field m_NativeData, offset 0x18, size 0x10
  __declspec(property(get = __get_m_NativeData, put = __set_m_NativeData))::Unity::Collections::NativeArray_1<uint8_t> m_NativeData;

  constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __get_m_NativeData();

  constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __get_m_NativeData() const;

  constexpr void __set_m_NativeData(::Unity::Collections::NativeArray_1<uint8_t> value);

  /// @brief Method Create, addr 0x2eafb84, size 0x3c, virtual false, abstract: false, final false
  static inline void* Create(::UnityEngine::Networking::DownloadHandlerBuffer* obj);

  /// @brief Method InternalCreateBuffer, addr 0x2eafbc0, size 0x44, virtual false, abstract: false, final false
  inline void InternalCreateBuffer();

  static inline ::UnityEngine::Networking::DownloadHandlerBuffer* New_ctor();

  /// @brief Method .ctor, addr 0x2eaf234, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method GetNativeData, addr 0x2eafc04, size 0x8, virtual true, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData();

  /// @brief Method Dispose, addr 0x2eafc0c, size 0x1c, virtual true, abstract: false, final false
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DownloadHandlerBuffer(DownloadHandlerBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DownloadHandlerBuffer(DownloadHandlerBuffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadHandlerBuffer();

public:
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
