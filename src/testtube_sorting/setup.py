from setuptools import setup

setup(
    name='testtube_sorting',
    version='0.0.0',
    packages=['testtube_sorting'],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/testtube_sorting']),
        ('share/testtube_sorting', ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Your Name',
    maintainer_email='your@email.com',
    description='Test tube sorting system',
    license='Apache-2.0',
    entry_points={
        'console_scripts': [
            'position_recorder = testtube_sorting.position_recorder:main',
            'pick_place = testtube_sorting.pick_place:main',
        ],
    },
)