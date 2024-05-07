#pragma once
// IWYU pragma private; include "GlobalNamespace/ToneMappingExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ToneMappingExtensions)
namespace GlobalNamespace {
struct ToneMapping;
}
// Forward declare root types
namespace GlobalNamespace {
class ToneMappingExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ToneMappingExtensions);
// Type: ::ToneMappingExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ToneMappingExtensions*
class CORDL_TYPE ToneMappingExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field _shaderKeywordMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__shaderKeywordMap, put = setStaticF__shaderKeywordMap))::ArrayW<::StringW, ::Array<::StringW>*> _shaderKeywordMap;

  /// @brief Method SetShaderKeyword, addr 0x24eacc0, size 0x94, virtual false, abstract: false, final false
  static inline void SetShaderKeyword(::GlobalNamespace::ToneMapping toneMapping);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF__shaderKeywordMap();

  static inline void setStaticF__shaderKeywordMap(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToneMappingExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToneMappingExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToneMappingExtensions(ToneMappingExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToneMappingExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToneMappingExtensions(ToneMappingExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ToneMappingExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ToneMappingExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ToneMappingExtensions*, "", "ToneMappingExtensions");
