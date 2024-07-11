#pragma once
// IWYU pragma private; include "Zenject/MonoKernel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MonoKernel)
namespace System {
class Object;
}
namespace Zenject {
class DisposableManager;
}
namespace Zenject {
class InitializableManager;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class TickableManager;
}
// Forward declare root types
namespace Zenject {
class MonoKernel;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::MonoKernel);
// Type: Zenject::MonoKernel
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 50, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::MonoKernel*
class CORDL_TYPE MonoKernel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_IsDestroyed)) bool IsDestroyed;

  /// @brief Field _disposablesManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__disposablesManager, put = __cordl_internal_set__disposablesManager))::Zenject::DisposableManager* _disposablesManager;

  /// @brief Field _hasInitialized, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__hasInitialized, put = __cordl_internal_set__hasInitialized)) bool _hasInitialized;

  /// @brief Field _initializableManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__initializableManager, put = __cordl_internal_set__initializableManager))::Zenject::InitializableManager* _initializableManager;

  /// @brief Field _isDestroyed, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__isDestroyed, put = __cordl_internal_set__isDestroyed)) bool _isDestroyed;

  /// @brief Field _tickableManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__tickableManager, put = __cordl_internal_set__tickableManager))::Zenject::TickableManager* _tickableManager;

  /// @brief Method FixedUpdate, addr 0x36ac954, size 0x10, virtual true, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method Initialize, addr 0x36ac910, size 0x34, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method LateUpdate, addr 0x36ac964, size 0x10, virtual true, abstract: false, final false
  inline void LateUpdate();

  static inline ::Zenject::MonoKernel* New_ctor();

  /// @brief Method OnDestroy, addr 0x36ac974, size 0x54, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x36ac90c, size 0x4, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x36ac944, size 0x10, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::Zenject::DisposableManager*& __cordl_internal_get__disposablesManager();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DisposableManager*> const& __cordl_internal_get__disposablesManager() const;

  constexpr bool const& __cordl_internal_get__hasInitialized() const;

  constexpr bool& __cordl_internal_get__hasInitialized();

  constexpr ::Zenject::InitializableManager*& __cordl_internal_get__initializableManager();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InitializableManager*> const& __cordl_internal_get__initializableManager() const;

  constexpr bool const& __cordl_internal_get__isDestroyed() const;

  constexpr bool& __cordl_internal_get__isDestroyed();

  constexpr ::Zenject::TickableManager*& __cordl_internal_get__tickableManager();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::TickableManager*> const& __cordl_internal_get__tickableManager() const;

  constexpr void __cordl_internal_set__disposablesManager(::Zenject::DisposableManager* value);

  constexpr void __cordl_internal_set__hasInitialized(bool value);

  constexpr void __cordl_internal_set__initializableManager(::Zenject::InitializableManager* value);

  constexpr void __cordl_internal_set__isDestroyed(bool value);

  constexpr void __cordl_internal_set__tickableManager(::Zenject::TickableManager* value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x36acd64, size 0x480, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenFieldSetter0, addr 0x36ac9c8, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter1, addr 0x36acafc, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter1(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter2, addr 0x36acc30, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter2(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method .ctor, addr 0x36abc94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsDestroyed, addr 0x36ac904, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDestroyed();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoKernel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoKernel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoKernel(MonoKernel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoKernel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoKernel(MonoKernel const&) = delete;

  /// @brief Field _tickableManager, offset: 0x18, size: 0x8, def value: None
  ::Zenject::TickableManager* ____tickableManager;

  /// @brief Field _initializableManager, offset: 0x20, size: 0x8, def value: None
  ::Zenject::InitializableManager* ____initializableManager;

  /// @brief Field _disposablesManager, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DisposableManager* ____disposablesManager;

  /// @brief Field _hasInitialized, offset: 0x30, size: 0x1, def value: None
  bool ____hasInitialized;

  /// @brief Field _isDestroyed, offset: 0x31, size: 0x1, def value: None
  bool ____isDestroyed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::MonoKernel, 0x38>, "Size mismatch!");

static_assert(offsetof(::Zenject::MonoKernel, ____tickableManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::MonoKernel, ____initializableManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::MonoKernel, ____disposablesManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::MonoKernel, ____hasInitialized) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::MonoKernel, ____isDestroyed) == 0x31, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::MonoKernel);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::MonoKernel*, "Zenject", "MonoKernel");
