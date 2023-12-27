#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BootConfigData)
// Forward declare root types
namespace UnityEngine {
class BootConfigData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::BootConfigData);
// Type: UnityEngine::BootConfigData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10186))
// CS Name: ::UnityEngine::BootConfigData*
class CORDL_TYPE BootConfigData : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Ptr, put = __set_m_Ptr)) void* m_Ptr;

  constexpr void*& __get_m_Ptr();

  constexpr void* const& __get_m_Ptr() const;

  constexpr void __set_m_Ptr(void* value);

  /// @brief Method WrapBootConfigData addr 0x2ccd090 size 0x60 virtual false final false
  static inline ::UnityEngine::BootConfigData* WrapBootConfigData(void* nativeHandle);

  static inline ::UnityEngine::BootConfigData* New_ctor(void* nativeHandle);

  /// @brief Method .ctor addr 0x2ccd0f0 size 0xc4 virtual false final false
  inline void _ctor(void* nativeHandle);

  // Ctor Parameters [CppParam { name: "", ty: "BootConfigData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BootConfigData(BootConfigData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BootConfigData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BootConfigData(BootConfigData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BootConfigData();

public:
  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::BootConfigData, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::BootConfigData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BootConfigData*, "UnityEngine", "BootConfigData");
