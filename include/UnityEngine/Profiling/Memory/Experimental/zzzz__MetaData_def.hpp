#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MetaData)
// Forward declare root types
namespace UnityEngine::Profiling::Memory::Experimental {
class MetaData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Profiling::Memory::Experimental::MetaData);
// Type: UnityEngine.Profiling.Memory.Experimental::MetaData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Profiling::Memory::Experimental {
// Is value type: false
// CS Name: ::UnityEngine.Profiling.Memory.Experimental::MetaData*
class CORDL_TYPE MetaData : public ::System::Object {
public:
  // Declarations
  /// @brief Field content, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content))::StringW content;

  /// @brief Field platform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_platform, put = __cordl_internal_set_platform))::StringW platform;

  static inline ::UnityEngine::Profiling::Memory::Experimental::MetaData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_content() const;

  constexpr ::StringW& __cordl_internal_get_content();

  constexpr ::StringW const& __cordl_internal_get_platform() const;

  constexpr ::StringW& __cordl_internal_get_platform();

  constexpr void __cordl_internal_set_content(::StringW value);

  constexpr void __cordl_internal_set_platform(::StringW value);

  /// @brief Method .ctor, addr 0x321dba8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaData(MetaData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaData(MetaData const&) = delete;

  /// @brief Field content, offset: 0x10, size: 0x8, def value: None
  ::StringW ___content;

  /// @brief Field platform, offset: 0x18, size: 0x8, def value: None
  ::StringW ___platform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Profiling::Memory::Experimental::MetaData, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Profiling::Memory::Experimental::MetaData, ___content) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Profiling::Memory::Experimental::MetaData, ___platform) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Profiling::Memory::Experimental
NEED_NO_BOX(::UnityEngine::Profiling::Memory::Experimental::MetaData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Memory::Experimental::MetaData*, "UnityEngine.Profiling.Memory.Experimental", "MetaData");
