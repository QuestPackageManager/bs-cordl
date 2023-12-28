#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_HAPI_ObjectInfo)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_ObjectInfo;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_HAPI_ObjectInfo);
// Type: HoudiniEngineUnity::Test_HAPI_ObjectInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9738))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9892))
// CS Name: ::HoudiniEngineUnity::Test_HAPI_ObjectInfo*
class CORDL_TYPE Test_HAPI_ObjectInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x1c
  __declspec(property(get = __get_self, put = __set_self))::HoudiniEngineUnity::HAPI_ObjectInfo self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ObjectInfo*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ObjectInfo*>*() noexcept;

  constexpr ::HoudiniEngineUnity::HAPI_ObjectInfo& __get_self();

  constexpr ::HoudiniEngineUnity::HAPI_ObjectInfo const& __get_self() const;

  constexpr void __set_self(::HoudiniEngineUnity::HAPI_ObjectInfo value);

  static inline ::HoudiniEngineUnity::Test_HAPI_ObjectInfo* New_ctor(::HoudiniEngineUnity::HAPI_ObjectInfo self);

  /// @brief Method .ctor addr 0x21e2c38 size 0x3c virtual false final false
  inline void _ctor(::HoudiniEngineUnity::HAPI_ObjectInfo self);

  /// @brief Method IsEquivalentTo addr 0x21e2c74 size 0x1b8 virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_ObjectInfo* other);

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_ObjectInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_HAPI_ObjectInfo(Test_HAPI_ObjectInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_ObjectInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_HAPI_ObjectInfo(Test_HAPI_ObjectInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_HAPI_ObjectInfo();

public:
  /// @brief Field self, offset: 0x10, size: 0x1c, def value: None
  ::HoudiniEngineUnity::HAPI_ObjectInfo ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_HAPI_ObjectInfo, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_ObjectInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_ObjectInfo*, "HoudiniEngineUnity", "Test_HAPI_ObjectInfo");
