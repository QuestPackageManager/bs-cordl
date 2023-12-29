#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_HAPI_AttributeInfo)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_AttributeInfo;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_HAPI_AttributeInfo);
// Type: HoudiniEngineUnity::Test_HAPI_AttributeInfo
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9668)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9825))
// CS Name: ::HoudiniEngineUnity::Test_HAPI_AttributeInfo*
class CORDL_TYPE Test_HAPI_AttributeInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x28
  __declspec(property(get = __get_self, put = __set_self))::HoudiniEngineUnity::HAPI_AttributeInfo self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>*() noexcept;

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __get_self();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __get_self() const;

  constexpr void __set_self(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  static inline ::HoudiniEngineUnity::Test_HAPI_AttributeInfo* New_ctor(::HoudiniEngineUnity::HAPI_AttributeInfo self);

  /// @brief Method .ctor addr 0x208ab90 size 0x34 virtual false final false
  inline void _ctor(::HoudiniEngineUnity::HAPI_AttributeInfo self);

  /// @brief Method IsEquivalentTo addr 0x208abc4 size 0xec virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_AttributeInfo* other);

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_AttributeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_HAPI_AttributeInfo(Test_HAPI_AttributeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_AttributeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_HAPI_AttributeInfo(Test_HAPI_AttributeInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_HAPI_AttributeInfo();

public:
  /// @brief Field self, offset: 0x10, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeInfo ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_HAPI_AttributeInfo, 0x38>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_HAPI_AttributeInfo, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_AttributeInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_AttributeInfo*, "HoudiniEngineUnity", "Test_HAPI_AttributeInfo");
