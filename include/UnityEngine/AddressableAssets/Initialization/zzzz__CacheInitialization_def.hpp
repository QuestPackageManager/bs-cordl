#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CacheInitialization)
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::AddressableAssets::Initialization {
class __CacheInitialization__CacheInitOp;
}
namespace UnityEngine::AddressableAssets::Initialization {
class __CacheInitialization____c__DisplayClass1_0;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::Util {
class IInitializableObject;
}
namespace UnityEngine::ResourceManagement {
class IUpdateReceiver;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Initialization {
class CacheInitialization;
}
namespace UnityEngine::AddressableAssets::Initialization {
class __CacheInitialization__CacheInitOp;
}
namespace UnityEngine::AddressableAssets::Initialization {
class __CacheInitialization____c__DisplayClass1_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Initialization::CacheInitialization);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization__CacheInitOp);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0);
// Type: ::CacheInitOp
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(14032))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14117))
// CS Name: ::CacheInitialization::CacheInitOp*
class CORDL_TYPE __CacheInitialization__CacheInitOp : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
public:
  // Declarations
  /// @brief Field m_Callback, offset 0x88, size 0x8
  __declspec(property(get = __get_m_Callback, put = __set_m_Callback))::System::Func_1<bool>* m_Callback;

  /// @brief Field m_UpdateRequired, offset 0x90, size 0x1
  __declspec(property(get = __get_m_UpdateRequired, put = __set_m_UpdateRequired)) bool m_UpdateRequired;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::IUpdateReceiver"
  constexpr operator ::UnityEngine::ResourceManagement::IUpdateReceiver*() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::IUpdateReceiver"
  constexpr ::UnityEngine::ResourceManagement::IUpdateReceiver* i___UnityEngine__ResourceManagement__IUpdateReceiver() noexcept;

  constexpr ::System::Func_1<bool>*& __get_m_Callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> const& __get_m_Callback() const;

  constexpr void __set_m_Callback(::System::Func_1<bool>* value);

  constexpr bool& __get_m_UpdateRequired();

  constexpr bool const& __get_m_UpdateRequired() const;

  constexpr void __set_m_UpdateRequired(bool value);

  /// @brief Method Init, addr 0x2a306f4, size 0x8, virtual false, abstract: false, final false
  inline void Init(::System::Func_1<bool>* callback);

  /// @brief Method InvokeWaitForCompletion, addr 0x2a306fc, size 0x94, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  /// @brief Method Update, addr 0x2a30790, size 0xb4, virtual true, abstract: false, final true
  inline void Update(float_t unscaledDeltaTime);

  /// @brief Method Execute, addr 0x2a30844, size 0x98, virtual true, abstract: false, final false
  inline void Execute();

  static inline ::UnityEngine::AddressableAssets::Initialization::__CacheInitialization__CacheInitOp* New_ctor();

  /// @brief Method .ctor, addr 0x2a30624, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__CacheInitialization__CacheInitOp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CacheInitialization__CacheInitOp(__CacheInitialization__CacheInitOp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CacheInitialization__CacheInitOp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CacheInitialization__CacheInitOp(__CacheInitialization__CacheInitOp const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CacheInitialization__CacheInitOp();

public:
  /// @brief Field m_Callback, offset: 0x88, size: 0x8, def value: None
  ::System::Func_1<bool>* ___m_Callback;

  /// @brief Field m_UpdateRequired, offset: 0x90, size: 0x1, def value: None
  bool ___m_UpdateRequired;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Initialization::__CacheInitialization__CacheInitOp, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization__CacheInitOp, ___m_Callback) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization__CacheInitOp, ___m_UpdateRequired) == 0x90, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::Initialization
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14118))
// CS Name: ::CacheInitialization::<>c__DisplayClass1_0*
class CORDL_TYPE __CacheInitialization____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::AddressableAssets::Initialization::CacheInitialization* __4__this;

  /// @brief Field id, offset 0x18, size 0x8
  __declspec(property(get = __get_id, put = __set_id))::StringW id;

  /// @brief Field data, offset 0x20, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::StringW data;

  constexpr ::UnityEngine::AddressableAssets::Initialization::CacheInitialization*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::Initialization::CacheInitialization*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::AddressableAssets::Initialization::CacheInitialization* value);

  constexpr ::StringW& __get_id();

  constexpr ::StringW const& __get_id() const;

  constexpr void __set_id(::StringW value);

  constexpr ::StringW& __get_data();

  constexpr ::StringW const& __get_data() const;

  constexpr void __set_data(::StringW value);

  static inline ::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a3061c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InitializeAsync>b__0, addr 0x2a308dc, size 0x24, virtual false, abstract: false, final false
  inline bool _InitializeAsync_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__CacheInitialization____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CacheInitialization____c__DisplayClass1_0(__CacheInitialization____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CacheInitialization____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CacheInitialization____c__DisplayClass1_0(__CacheInitialization____c__DisplayClass1_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CacheInitialization____c__DisplayClass1_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::Initialization::CacheInitialization* _____4__this;

  /// @brief Field id, offset: 0x18, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field data, offset: 0x20, size: 0x8, def value: None
  ::StringW ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0, ___id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0, ___data) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::Initialization
// Type: UnityEngine.AddressableAssets.Initialization::CacheInitialization
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14119))
// CS Name: ::UnityEngine.AddressableAssets.Initialization::CacheInitialization*
class CORDL_TYPE CacheInitialization : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass1_0 = ::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0;

  using CacheInitOp = ::UnityEngine::AddressableAssets::Initialization::__CacheInitialization__CacheInitOp;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IInitializableObject"
  constexpr operator ::UnityEngine::ResourceManagement::Util::IInitializableObject*() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::IInitializableObject"
  constexpr ::UnityEngine::ResourceManagement::Util::IInitializableObject* i___UnityEngine__ResourceManagement__Util__IInitializableObject() noexcept;

  /// @brief Method Initialize, addr 0x2a3037c, size 0x14c, virtual true, abstract: false, final true
  inline bool Initialize(::StringW id, ::StringW dataStr);

  /// @brief Method InitializeAsync, addr 0x2a304c8, size 0x154, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> InitializeAsync(::UnityEngine::ResourceManagement::ResourceManager* rm, ::StringW id, ::StringW data);

  /// @brief Method get_RootPath, addr 0x2a30674, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_RootPath();

  static inline ::UnityEngine::AddressableAssets::Initialization::CacheInitialization* New_ctor();

  /// @brief Method .ctor, addr 0x2a306ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CacheInitialization", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CacheInitialization(CacheInitialization&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CacheInitialization", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CacheInitialization(CacheInitialization const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CacheInitialization();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Initialization::CacheInitialization, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::Initialization
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::CacheInitialization);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::CacheInitialization*, "UnityEngine.AddressableAssets.Initialization", "CacheInitialization");
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization__CacheInitOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization__CacheInitOp*, "UnityEngine.AddressableAssets.Initialization", "CacheInitialization/CacheInitOp");
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0*, "UnityEngine.AddressableAssets.Initialization",
                       "CacheInitialization/<>c__DisplayClass1_0");
