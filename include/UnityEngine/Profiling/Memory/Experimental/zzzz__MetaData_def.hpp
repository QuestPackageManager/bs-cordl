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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10298))
// CS Name: ::UnityEngine.Profiling.Memory.Experimental::MetaData*
class CORDL_TYPE MetaData : public ::System::Object {
public:
  // Declarations
  /// @brief Field content, offset 0x10, size 0x8
  __declspec(property(get = __get_content, put = __set_content))::StringW content;

  /// @brief Field platform, offset 0x18, size 0x8
  __declspec(property(get = __get_platform, put = __set_platform))::StringW platform;

  constexpr ::StringW& __get_content();

  constexpr ::StringW const& __get_content() const;

  constexpr void __set_content(::StringW value);

  constexpr ::StringW& __get_platform();

  constexpr ::StringW const& __get_platform() const;

  constexpr void __set_platform(::StringW value);

  static inline ::UnityEngine::Profiling::Memory::Experimental::MetaData* New_ctor();

  /// @brief Method .ctor addr 0x2ce6cd0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MetaData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaData(MetaData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaData(MetaData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaData();

public:
  /// @brief Field content, offset: 0x10, size: 0x8, def value: None
  ::StringW ___content;

  /// @brief Field platform, offset: 0x18, size: 0x8, def value: None
  ::StringW ___platform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Profiling::Memory::Experimental::MetaData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Profiling::Memory::Experimental
NEED_NO_BOX(::UnityEngine::Profiling::Memory::Experimental::MetaData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Memory::Experimental::MetaData*, "UnityEngine.Profiling.Memory.Experimental", "MetaData");
