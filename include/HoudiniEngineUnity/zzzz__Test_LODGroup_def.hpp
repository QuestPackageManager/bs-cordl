#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_LODGroup)
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace UnityEngine {
class LODGroup;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_LODGroup;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_LODGroup);
// Type: HoudiniEngineUnity::Test_LODGroup
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9904))
// CS Name: ::HoudiniEngineUnity::Test_LODGroup*
class CORDL_TYPE Test_LODGroup : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __get_self, put = __set_self))::UnityEngine::LODGroup* self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>*() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>"
  constexpr ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>* i___HoudiniEngineUnity__IEquivableWrapperClass_1___HoudiniEngineUnity__Test_LODGroup__() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LODGroup*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LODGroup*>*() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LODGroup*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LODGroup*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_LODGroup__() noexcept;

  constexpr ::UnityEngine::LODGroup*& __get_self();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::LODGroup*> const& __get_self() const;

  constexpr void __set_self(::UnityEngine::LODGroup* value);

  static inline ::HoudiniEngineUnity::Test_LODGroup* New_ctor(::UnityEngine::LODGroup* self);

  /// @brief Method .ctor, addr 0x21e422c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::LODGroup* self);

  /// @brief Method IsNull, addr 0x21e4254, size 0x60, virtual true, abstract: false, final true
  inline bool IsNull();

  /// @brief Method IsEquivalentTo, addr 0x21e42b4, size 0x28c, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_LODGroup* other);

  // Ctor Parameters [CppParam { name: "", ty: "Test_LODGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_LODGroup(Test_LODGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_LODGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_LODGroup(Test_LODGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_LODGroup();

public:
  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::LODGroup* ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_LODGroup, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_LODGroup, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_LODGroup);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_LODGroup*, "HoudiniEngineUnity", "Test_LODGroup");
