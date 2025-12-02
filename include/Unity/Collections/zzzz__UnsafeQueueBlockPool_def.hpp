#pragma once
// IWYU pragma private; include "Unity/Collections/UnsafeQueueBlockPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
CORDL_MODULE_EXPORT(UnsafeQueueBlockPool)
namespace System {
class EventArgs;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct UnsafeQueueBlockPoolData;
}
// Forward declare root types
namespace Unity::Collections {
class UnsafeQueueBlockPool;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::UnsafeQueueBlockPool);
// Dependencies System.IntPtr, System.Object, Unity.Burst.SharedStatic`1<T>
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.UnsafeQueueBlockPool
class CORDL_TYPE UnsafeQueueBlockPool : public ::System::Object {
public:
  // Declarations
  /// @brief Field Data, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Data, put = setStaticF_Data)) ::Unity::Burst::SharedStatic_1<::System::IntPtr> Data;

  /// @brief Method AppDomainOnDomainUnload, addr 0x62ab1ac, size 0x94, virtual false, abstract: false, final false
  static inline void AppDomainOnDomainUnload();

  /// @brief Method GetQueueBlockPool, addr 0x62ab080, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::UnsafeQueueBlockPoolData* GetQueueBlockPool();

  static inline ::Unity::Collections::UnsafeQueueBlockPool* New_ctor();

  /// @brief Method OnDomainUnload, addr 0x62ab240, size 0xf0, virtual false, abstract: false, final false
  static inline void OnDomainUnload(::System::Object* sender, ::System::EventArgs* e);

  /// @brief Method .ctor, addr 0x62ab330, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Burst::SharedStatic_1<::System::IntPtr> getStaticF_Data();

  static inline void setStaticF_Data(::Unity::Burst::SharedStatic_1<::System::IntPtr> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeQueueBlockPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafeQueueBlockPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeQueueBlockPool(UnsafeQueueBlockPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeQueueBlockPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeQueueBlockPool(UnsafeQueueBlockPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15687 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::UnsafeQueueBlockPool, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::UnsafeQueueBlockPool);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::UnsafeQueueBlockPool*, "Unity.Collections", "UnsafeQueueBlockPool");
